# Aula 22 - Como funcionam o pré processamento e as macros em C

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nos aprendemos como funciona o pré processamento no C, para que servem os includes, header guards e oque são as macros do pré processador.
Para visualizar o código de exemplo pré processado compile o exemplo 'teste.c' deste diretório com o
seguinte comando:

```c
gcc -E teste.c
```

 Este comando irá exibir o resultado do pré processamento na tela do terminal.
 O pré processador irá expandir a Macro NOME, definida no arquivo [\_maisum.h](https://github.com/Geofisicando/C-orientado-a-testes/blob/1a2c80c73077ca97764c19f98b3c845c86cf89d7/exemplos/pre_processador/_maisum.h#L3), e irá acresencentar os arquivos 
include respeitando o ifndef em [\_bool.h](https://github.com/Geofisicando/C-orientado-a-testes/blob/main/exemplos/pre_processador/_bool.h).
