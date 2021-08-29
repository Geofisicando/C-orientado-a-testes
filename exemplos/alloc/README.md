# Aula 59 - Criar uma função de alocação dinâmica personalizada em c (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós criamos uma função de alocação dinâmica personalizada em lingugagem C. Primeiro, aprendemos a utilizar um novo tipo de variável
**size_t**:

> O tipo size_t armazena o tamanho de qualquer tipo de objeto, em bytes. É um apelido para um tipo inteiro que aceita apenas valores positivos (unsigned). É o tipo retornado pelo operador sizeof

O funcionamento da função alloc é bastante simples, passamos dois parâmetros, um inteiro multiplicador e o tamanho em bytes do tipo, utilizando o operador
sizeof. Assim, para alocar um vetor de 5 inteiros, basta utilizar:

```c
vetor = (int) alloc(5,sizeof(int));
```

# Aula 60 - Criar uma função de alocação dinâmica personalizada em c (Parte 2)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)
