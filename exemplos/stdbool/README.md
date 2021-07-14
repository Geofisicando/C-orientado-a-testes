# Aula 16 - Variáveis booleanas e implementação da interface stdbool em c

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula aprendemos como o C trata as variáveis boolenas e criamos a nossa interface personalizada para tipos booleanos, '\_bool.h'.
O C não possui variáveis booleanas. A linguagem C interpreta o valor 0 como **false** e qualquer valor diferente de 0 como **true**. Deste modo,
a definição do tipo bool em C pode ser feita definindo o enum a seguir:

```c
typedef enum {false,true} BOOL;
```

Assim, a palavra 'false' passa a representar o inteiro 0 e a palavra 'true' passa a representar o inteiro 1.

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório basta utilizar o comando a seguir:

```sh
make
```
