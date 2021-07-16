# Aula 27 - As macros assert e NDEBUG da biblioteca assert.h

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a utilizar a função assert e a macro NDEBUG para estabelecer condições de teste de depuração
no nosso código em desenvolvimento. A assert precisa da inclusão da biblioteca 'assert.h' e recebe uma condição que deve
ser validada para que a execução do código continue.

```c
#include <assert.h>
...
assert(nota >= 0 && nota <=10);
```

No exemplo acima a assert irá encerrar a execução se a variável nota for menor que 0 ou maior que 10 (estiver fora do intervalo aceito pelo programa).
Ao definir a macro NDEBUG, todas as asserts do código são desabilitadas e não irão funcionar ainda que a condição de falha dentro da assert ocorra.

```c
#define NDEBUG
#include <assert.h>
...
assert(nota >= 0 && nota <=10);
```

## Exemplo de uso

Para compilar o código utilizado nesta aula com o programa 'make' basta rodar o comando a seguir:

```sh
make
```

O binário executável 'exemplo.x' será gerado com as asserts habilitadas. Se quiser desativar a assert, basta descomentar a [linha 2](https://github.com/Geofisicando/C-orientado-a-testes/blob/ee254d5ef0363a81635f816b52e45e24e1c95479/exemplos/assert_ndebug/exemplo.c#L2)
para definir a macro NDEBUG.
