# Aula 77 - Como obter o valor de uma variável de ambiente do shell em C

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a utilizar a função getenv para obter os valores de variáveis do terminal do Shell dentro de um programa em C. Para
tanto, basta chamar a função 'getenv' passando o nome da variável de ambiente como uma string como no exemplo a seguir:

```c
getenv("HOME")
```

A função 'getenv' acima irá retornar o valor armazenado na variável de ambiente $HOME como uma string.
