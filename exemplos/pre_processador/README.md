# Aula 22 - Como funcionam o pré processamento e as macros em C

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nos aprendemos como funciona o pré processamento no C e oque são as macros do pré processador. Para visualizar
o código de exemplo pré processado compile o exemplo 'teste.c' deste diretório com o
seguinte comando para ver o resultado do pré processamento na tela do terminal:

```c
gcc -E teste.c
```

O pré processador irá expandir a Macro NOME, definida em \_maisum.h, e irá acresencentar os arquivos 
include respeitando o ifndef em \_bool.h.
