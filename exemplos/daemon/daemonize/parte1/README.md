# Aula 82 - Implementação da função daemonize e da técnica fork and die (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós começamos a estudar implementação da técnica "fork and die" para tornar um processo em um Daemon. Nós começamos a implementar
a função daemonize que, quando chamada dentro da função main, torna o processo chamador em um Daemon.

### Primeira chamada de sistema fork

Primeiro, nós iniciamos o processo criando o primeiro filho, a partir do processo pai, com a chamada de sistema fork (como aprendemos
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
Execute o comando killall para encerrar todas as instâncias de 'gb_daemon' quando terminar:

```sh
killall gb_daemon
```

### Encerrar o processo pai

Nesta segunda parte da aula, nós apenas acrescentamos a chamada de sistema exit ao código do processo pai, para encerrar ("matar" o processo pai).
Daí fazemos pause para visualizar o processo filho após o encerramento do processo pai. Veja o trecho de código a seguir:

```c
/* primeito fork and die (para gerar o primeiro filho) */
    pid = fork();
    if (pid >= 0) {
        if (pid != 0) { // Encerrar o pai
            exit(0);
        }
    } else { // erro
        exit(1);
    }
    
    pause(); // Pausar após encerrar o processo pai
 ```
 
 Após o encerramento do processo pai, o filho pausa, aguardando o envio de algum sinal. Você poderá visualizar o processo filho, basta executar o
 comando 'ps', a saída deverá ser algo parecido com a saída a seguir:
 
 ```sh
ps -xj | grep gb_daemon
   2089   22261   22260   20504 pts/7      22270 S     1000   0:00 ./gb_daemon
  20504   22271   22270   20504 pts/7      22270 S+    1000   0:00 grep --color=auto gb_daemon
```

Observe que restou apenas uma instância do processo 'gb_daemon'. Ela ainda está vinculada a um terminal (observe a coluna 5) e não é
líder de sessão: A coluna 2, PID do processo, é diferente da coluna 4, SID (ID de sessão do processo).

Observe também de quem o processo 'gb_daemon' é filho, para isto basta passar o PPID, na primeira coluna,
para o comando 'ps', como a seguir (a saída deverá ser algo parecido, substitua o PPID pelo PPID que você obteve na sua máquina):

```sh
 ps -p 2089
    PID TTY          TIME CMD
   2089 ?        00:00:00 systemd
```

Após encerrarmos o processo pai, o processo filho é "adotado" pelo processo systemd.

 ### Exemplo de uso da segunda parte da aula

Você pode reproduzir o exemplo de uso presente na pasta
[die](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/daemon/daemonize/parte1/die) deste diretório.
Neste exemplo, implementamos a função daemonize até o primeiro fork,
criamos o processo filho e encerramos o processo pai. Após o encerramento do processo pai,
fazemos a chamada de sistema pause para que você possa visualizar o processo filho utilizando
o comando 'ps' visto nesta aula. Basta compilar com:

```sh
make
```

E executar o 'gb_daemon' com:

```sh
./gb_daemon
```

Execute o comando killall para encerrar todas as instâncias de 'gb_daemon' quando terminar:

```sh
killall gb_daemon
```
