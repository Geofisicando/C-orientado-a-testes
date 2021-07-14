# Aula 15 - Como utilizar cores no terminal, em saídas de programas em C e no Unity

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos como habilitar as cores do Unity framework para testes unitários em C.
Para habilitar a saída colorida das mensagens de erro no Unity, acrescente a
seguinte linha na [linha 10 em 'Unity/unity.h'](https://github.com/Geofisicando/C-orientado-a-testes/blob/8781bebbae2c74e81239478849b9dfebcc2d85f4/exemplos/unity_output_color/Unity/unity.h#L10):

```c
#define UNITY_OUTPUT_COLOR
```

## Exemplo de uso

Neste diretório você tem um exemplo de uso do Unity já com a saída de cores habilitada. Você pode rodar este exemplo utilizando o comando a seguir:

```sh
make
```

Na pasta [cores_em_c](https://github.com/Geofisicando/C-orientado-a-testes/blob/main/exemplos/unity_output_color/cores_em_c/README.md#exemplo-exibir-mensagem-colorida-em-programa-do-c) temos um exemplo de uso sobre como exibir mensagens com cores na tela do terminal utilizando os caracteres ANSI na função printf.
Este exemplo também pode ser compilado e executado com o comando 'make' acima.
