# Aula 73 - Criar processos no Linux, a chamada de sistema fork

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nś aprendemos a utilizar a chamada de sistema fork para criar processos no Linux. A chamada de sistema fork cria uma cópia do processo
chamador (processo Pai) chamada de Processo Filho (Veja a [Aula 72](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/syscalls/intro#chamada-de-sistema-fork)). É bastante simples fazer a chamada de sistema fork em C. Basta utilizar a função fork(), como abaixo:

```c
pid_t childPIDorZero = fork();
```

Como os processos são cópias idênticas e possuem as mesmas variáveis, mas em espaços de memória diferentes,
podemos utilizar uma variável especial _childPIDorZero_, do tipo **pid_t**.
Esta variável assume o valor igual ao PID do processo filho, se estivermos no processo Pai;
igual a zero, se estivermos no processo filho; e negativo, se ocorrer erro na chamada de sistema.
Este valor é retornado pela chamada de sistema fork.

Daí basta utilizar um bloco if para verificar se houve erro na chamada de sistema e outro bloco if para
separar o código que será executado pelo processo Pai e pelo processo Filho a depender do valor
de _childPIDorZero_.

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório basta utilizar o seguinte comando:

```sh
make
```

A saída esperada do comando é a seguinte:

```
gcc -g exemplo.c -o exemplo.x
./exemplo.x
Estou no processo pai PID=7849
Estou no processo filho PID=7850
```

O processo Filho irá executar por 5 segundos e irá exibir a seguinte mensagem:

```
Filho encerrou...
```

Daí o processo Pai irá encerrar a sua execução:

```
Pai encerrou...
```
