# Aula 74 - As chamadas de sistema wait e exec no Linux

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós refizemos o exemplo da
[Aula 73](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/syscalls/fork#aula-73---criar-processos-no-linux-a-chamada-de-sistema-fork)
utilizando as chamadas de sistema wait e exec. Após a chamada de sistema fork, os processos Pai e Filho continuam a execução de maneira independente (são
dois processos diferentes) e encerram independentemente. Para fazer o processo Pai esperar o processo Filho fazemos a chamada de sistema _wait_ com a função
wait(). A forma mais simples de fazer esta chamada de sistema é passar o parâmetros NULL, como a seguir:

```c
wait(NULL);
```

O código do processo Filho foi alterado para fazer a chamada de sistema _exec_. Esta chamada de sistema cria um novo processo que irá substituir o processo
chamador. Veja a representação esquemática abaixo:

<img src="https://github.com/Geofisicando/C-orientado-a-testes/blob/main/exemplos/syscalls/wait_exec/wait%20exec.gif" width=800>

É importante deixar clara a diferença entre a chamada de sistema exec e a chamada de sistema fork.
Pois, fork cria uma cópia do processo chamador que irá executar de maneira independente; e exec irá criar um novo processo que irá substituir o processo
chamador. No exemplo de uso desta aula nós fizemos a chamada de sistema para executar um comando echo no terminal do shell:

```c
execl("/bin/echo","echo","Olá galera do canal!",NULL);
```

O primeiro parâmetro é o binário a ser executado e os parâmetros subsequentes são  o comando e os parâmetros do comando a ser executado no terminal. O último
parâmetro passado, NULL, encerra a lista de parâmetros.

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório basta utilizar o seguinte comando:

```sh
make
```

A saída esperada do comando é a seguinte:

```
gcc -g exemplo.c -o exemplo.x
./exemplo.x
Estou no processo pai PID=8636 Esperando meu filho PID=8637
Estou no processo filho PID=8637 Meu pai tem PID=8636
```

O processo Filho irá executar por 5 segundos e irá exibir a seguinte mensagem:

```
Olá galera do canal!
```

Daí o processo Pai irá encerrar a sua execução:

```
Pai encerrou...
```
