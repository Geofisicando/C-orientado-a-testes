# Aula 83 - Implementação da função daemonize e da técnica fork and die (Parte 2)

Nesta aula, nós demos continuidade a implementação da função daemonize.

## Tornar o primeiro processo filho líder de sessão e ignorar sinais

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Seguindo com a implementação da função daemonize que transforma o processo chamador em um Daemon, nós tornamos o primeiro processo filho,
criado na aula anterior ([Aula 82](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/daemon/daemonize/parte1#aula-82---implementa%C3%A7%C3%A3o-da-fun%C3%A7%C3%A3o-daemonize-e-da-t%C3%A9cnica-fork-and-die-parte-1)), líder de sessão. Isto fará com que o
primeiro processo filho desacople do seu terminal de controle. Para isto, nós utilizamos a função 'setsid' como a seguir:

```c
    /* Criar nova sessão e tornar o primeiro filho líder desta sessão */
    if (setsid() < 0) {
        exit(1); // erro
    }
 ```
 
 A função 'setsid' cria uma nova sessão e torna o processo chamador líder da nova sessão criada. Esta função retornará um número negativo se
 a criação da nova sessão falhar.
 
### Exemplo de uso da primeira parte da aula

Você pode reproduzir o exemplo de uso presente na pasta [liderSessao](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/daemon/daemonize/parte2/liderSessao) deste diretório. Neste exemplo, implementamos a função daemonize até o primeiro fork, criamos o processo filho, encerramos o processo pai e tornamos o primeiro processo filho líder de sessão. Isto feito, após ignorar alguns sinais, nós
criamos o segundo processo filho utilizando a chamada de sistema fork outra vez.

Nós utilizamos a chamada de sistema 'pause' em ambos, primeito processo filho e segundo processo filho, para que você possa visualizar os dois processos utilizando o comando 'ps'. Basta compilar com:

```sh
make
```

E executar o 'gb_daemon' com:

```sh
./gb_daemon
```

Você poderá utilizar o comando 'ps' para visualizar as instâncias de 'gb_daemon' criadas. A saída deverá ser semelhante a esta:

```sh
ps -xj | grep gb_daemon
   2127   25319   25319   25319 ?             -1 Ss    1000   0:00 ./gb_daemon
  25319   25320   25319   25319 ?             -1 S     1000   0:00 ./gb_daemon
  25273   25324   25323   25273 pts/0      25323 S+    1000   0:00 grep --color=auto gb_daemon
```

Observe que a primeira instância do 'gb_daemon' (processo na primeira linha) é lider de sessão,
pois o PID (número na segunda coluna, 25319) é igual ao SID (número da terceira coluna, 25319). E a
segunda instância do 'gb_daemon' (processo na segunda linha)
é filha da primeira instância. Pois, o PPID (número na primeira coluna, 25319) é igual ao PID do primeiro processo 'gb_daemon' listado
(número da segunda coluna na primeira linha, 25319).
Observe também que nenhum dos dois processos está vinculado a um terminal de controle (sinal de '?' na quarta coluna).

Execute o comando killall para encerrar todas as instâncias de 'gb_daemon' quando terminar:

```sh
killall gb_daemon
```
 
 ## Segundo fork and die
