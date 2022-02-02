# Aula 82 - Implementação da função daemonize e da técnica fork and die (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós começamos a estudar implementação da técnica "fork and die" para tornar um processo em um Daemon. Nós começamos a implementar
a função daemonize que, quando chamada dentro da função main, torna o processo chamador em um Daemon.

Primeiro nós iniciamos o processo criando o primeiro filho, a partir do processo pai, com a chamada de sistema fork (como aprendemos
na [Aula 73](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/syscalls/fork#aula-73---criar-processos-no-linux-a-chamada-de-sistema-fork)).
Após a chamada temos dois processos, o processo pai e o processo filho, uma cópia idêntica do processo pai.

Para visualizar os dois processos, nós utilizamos a chamada de sistema pause(), que faz o processo chamador dormir até que este receba um sinal qualquer.

Daí iniciamos o 'gb_daemon' com o seguinte comando:

```sh
./gb_daemon
```

Abrimos outro terminal, e visualizamos a lista de processos com o comando 'ps' e filtramos a saída com o 'grep', com o comando a seguir:

```sh
ps -xj | grep gb_daemon
```

No terminal, devem aparecer duas instâncias do 'gb_daemon', uma destas instâncias deve ter o PPID igual ao PID da outra, indicando que se
trata do processo filho criado a partir da chamada de sistema fork. A outra instância de 'gb_daemon' deve ter o PPID igual ao PID do terminal
do bash, indicando que esta é o processo pai.

Para verificar o nome do processo em execução a partir do PID, utilizamos o seguinte comando:

```sh
ps -p 2076
```

Onde 2076 é o PID do processo (utilize o PID do processo cujo nome você deseja saber).
