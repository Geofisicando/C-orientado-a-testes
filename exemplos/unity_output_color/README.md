# Aula 15 - Como utilizar cores no terminal, em saídas de programas em C e no Unity

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos como habilitar as cores do Unity framework para testes unitários em C.
Para habilitar a saída colorida das mensagens de erro no Unity, acrescente a
seguinte linha na linha 10 em 'Unity/unity.h':

```c
#define UNITY_OUTPUT_COLOR
```

## Exemplo de uso

Neste diretório você tem um exemplo de uso do Unity já com a saída de cores habilitada. Você pode rodar este exemplo utilizando o comando a seguir:

```sh
make
```
