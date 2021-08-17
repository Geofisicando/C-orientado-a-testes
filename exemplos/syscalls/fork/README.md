# Aula 73 - Criar processos no Linux, a chamada de sistema fork

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nś aprendemos a utilizar a chamada de sistema fork para criar processos no Linux. A chamada de sistema fork cria uma cópia do processo
chamador (processo Pai) chamada de Processo Filho (Veja a [Aula 72](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/syscalls/intro#chamada-de-sistema-fork)). É bastante simples fazer a chamada de sistema fork em C. Basta utilizar a função fork(), como abaixo:

```c
pid_t childPIDorZero = fork();
```

Como os processos são cópias idênticas e possuem as mesmas variáveis, mas em espaços de memória diferentes, podemos utilizar uma variável especial _childPIDorZero_, do tipo **pid_t**. Esta variável assume o valor igual ao PID do processo filho, se estivermos no processo Pai; e igual a zero se estivermos no processo filho. Esta variável recebe o valor retornado pela chamada de sistema fork.
