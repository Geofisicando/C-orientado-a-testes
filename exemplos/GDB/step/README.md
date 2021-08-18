#### Programa para estudar depuração com GDB

A compilação deste programa deverá ser feita com a opção '-g'
do compilador gcc para gerar a lista de símbolos a ser lida
pelo GDB. Exemplo:

```sh
~$ gcc -g main.c -o main.x
```

#### Corrigindo o bug

Utilize o programa para treinar os comandos do GDB monitorando
as variáveis e funções do programa: next para executar a 
próxima linha e step para entrar nas chamadas de função.

O bug é o operador da função soma que é o sinal de multiplicação
'\*' ao invés do sinal de adição '+'. Basta trocar:

```c
float soma(float f1, float f2){
	return f1*f2;
}
```

Por:

```c
float soma(float f1, float f2){
	return f1+f2;
}
```

Para corrigir o bug.

