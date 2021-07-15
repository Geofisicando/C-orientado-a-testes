# Aula 22 - Como funcionam o pré processamento e as macros em C

#### Exemplo de utilização do pré processador do c e Macros

Compile este exemplo com o seguinte comando para ver o resultado do pré processamento na tela do terminal:

```c
gcc -E teste.c
```

O pré processador irá expandir a Macro NOME, definida em \_maisum.h, e irá acresencentar os arquivos 
include respeitando o ifndef em \_bool.h.
