# Aula 77 - Como obter o valor de uma variável de ambiente do shell em C

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a utilizar a função getenv para obter os valores de variáveis do terminal do Shell dentro de um programa em C. Para
tanto, basta chamar a função 'getenv' passando o nome da variável de ambiente como uma string como no exemplo a seguir:

```c
getenv("HOME")
```

A função 'getenv' acima irá retornar o valor armazenado na variável de ambiente $HOME como uma string.

Podemos também obter outras variáveis que não sejam as variáveis de ambiente utilizando o comando 'export'. Primeiro criamos uma variável
qualquer e a exportamos no terminal do Shell, como no exemplo a seguir:

```sh
NOME="Rodolfo Dirack"
export NOME
```

A variável $NOME agora pode ser obtida dentro do nosso programa em C com a função 'getenv' e exibida com 'printf':

```c
printf("NOME: %s \n",getenv("NOME"));
```

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório utilizando o Makefile basta utilizar o seguinte comando:

```sh
make
```
