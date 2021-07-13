# Aula 8 - Implementação de uma estrutura de dados do tipo Pilha com TDD

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós preparamos a suíte de testes e o Makefile para automatizar os testes antes de começar a implementação da nossa estrutura de 
dados pilha com TDD. Uma boa prática é criar o esboço dos casos de teste no Unity e utilizar a macro a seguir para ignorar as funções enquanto
os testes ainda não foram implementados:

```c
TEST_IGNORE_MESSAGE("Not implemented");
```

Assim saberemos que o teste precisa ser feito, mas ainda não foi implementado.

## Exemplo de uso

Neste diretório temos o exemplo de uso desta etapa da implementação da pilha, você pode compilar e rodar os testes
utilizando o seguinte comando:

```sh
make
```
