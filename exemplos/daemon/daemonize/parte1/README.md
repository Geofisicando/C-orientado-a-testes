# Aula 82 - Implementação da função daemonize e da técnica fork and die (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós começamos a estudar implementação da técnica "fork and die" para tornar um processo em um Daemon. Nós começamos a implementar
a função daemonize que, quando chamada dentro da função main, torna o processo chamador em um Daemon.

Primeiro nós iniciamos o processo criando o primeiro filho, a partir do processo pai, com a chamada de sistema fork (como aprendemos
na [Aula 73](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/syscalls/fork#aula-73---criar-processos-no-linux-a-chamada-de-sistema-fork)).
Após a chamada temos dois processos, o processo pai e o processo filho, uma cópia idêntica do processo pai.

Para visualizar os dois processos, nós utilizamos a chamada de sistema pause(), que faz o processo chamador dormir até que este receba um sinal qualquer.
Como no trecho de código a seguir:

```c
/* primeito fork and die (para gerar o primeiro filho) */
    pid = fork();
    if (pid >= 0) {
        if (pid != 0) { // Encerrar o pai
            pause(); // Ambos os processos irão parar
        }
    } else { // erro
        exit(1);
    }
```

A variável pid assume dois valores, o pid do processo filho se estiver no processo pai, e 0 se estiver no processo filho. Daí podemos saber se
estamos no processo filho ou no processo pai com um if. A variável pid será negativa se ocorrer um erro na chamada de sistema fork.

Daí iniciamos o 'gb_daemon' com o seguinte comando:

```sh
./gb_daemon
```

Abrimos outro terminal, visualizamos a lista de processos com o comando 'ps' e filtramos a saída com o 'grep', com o comando a seguir:

```sh
ps -xj | grep gb_daemon
```

A saída esperada pelo comando deve ser algo parecido com a saída a seguir:

```sh
ps -xj | grep gb_daemon
  20504   20963   20963   20504 pts/7      20963 S+    1000   0:00 ./gb_daemon
  20963   20964   20963   20504 pts/7      20963 S+    1000   0:00 ./gb_daemon
  20967   20986   20985   20967 pts/8      20985 S+    1000   0:00 grep --color=auto gb_daemon
```

A primeira coluna é o PPID do processo (ID do processo pai), a segunda é o PID (ID do processo) e a quinta é o terminal de controle do processo
(iremos ignorar as outras colunas por enquanto).

No terminal, devem aparecer duas instâncias do 'gb_daemon', uma destas instâncias deve ter o PPID igual ao PID da outra, indicando que se
trata do processo filho, criado a partir da chamada de sistema fork. A outra instância de 'gb_daemon' deve ter o PPID igual ao PID do terminal
do bash, indicando que esta é o processo pai.

Para verificar o nome do processo em execução a partir do PID, utilizamos o seguinte comando:

```sh
ps -p 2076
```

Onde 2076 é o PID do processo (utilize o PID do processo cujo nome você deseja saber).

Daí encerramos todas as instâncias do processo 'gb_daemon' com o comando a seguir:

```sh
killall gb_daemon
```

### Exemplo de uso da primeira parte da aula

Você pode reproduzir o exemplo de uso presente na pasta [fork](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/daemon/daemonize/parte1/fork) deste diretório. Neste exemplo, implementamos a função daemonize até o primeiro fork,
criamos o processo filho e fazemos a chamada de sistema pause em ambos, processo filho e pai para que você possa visualizar os dois processos utilizando
o comando 'ps' visto nesta aula. Basta compilar com:

```sh
make
```

E executar o 'gb_daemon' com:

```sh
./gb_daemon
```

Você precisará abrir outro terminal para executar os comandos 'ps' desta parte da aula e visualizar as instâncias de 'gb_daemon' criadas.
