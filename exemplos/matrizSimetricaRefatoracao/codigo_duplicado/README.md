# Aula 24 - Refatoração do código da matriz simétrica (Parte 2)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós removemos o código duplicado das funções acessa e atribui no nosso exemplo de implementação do código da matriz simétrica abstraindo o código duplicado em duas funções, verificaLinhaColunaValidas e retornaIndiceVetor. Assim não precisamos repetir os blocos if em cada uma das funções para acessar os elementos da matriz simétrica ou obter o índice do vetor, basta realizar a chamada à função correspondente. Isto torna a leitura do código e a manutenção mais simples.

### Exemplo de uso

Você pode compilar e rodar este exemplo de uso com o programa 'make'. Para compilar e rodar o programa principal utilize o comando a seguir:

```sh
make
```

Para compilar e rodar os testes utilize o comando a seguir:

```sh
make test
```
