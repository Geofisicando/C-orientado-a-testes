# Aula 17 - Como fazer depuração (Debug) do código: Matriz simétrica (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós fizemos a análise do código original da matriz simétrica respondendo a uma [dúvida postada no grupo Programadores BR](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/matrizSimetrica/original#c%C3%B3digo-fonte-original-da-matriz-sim%C3%A9trica-para-depura%C3%A7%C3%A3o). A análise do código ressaltou alguns pontos problemáticos encontrados no código fonte:

- Nomes de variáveis e funções pouco claros
- Ausência de testes unitários
- Ausência de documentação
- Implementação e funções no mesmo arquivo (sem modularização)

Ao compilar e rodar o código fonte nós obtivemos a seguinte mensagem:

```

Atribuicao invalida.
```

Ou seja, o código está compilando e rodando sem nenhum erro aparente.

A primeira tarefa realizada no código foi copiar o original e produzir uma nova versão modularizada para poder começar a depuração: Programa
principal em 'main.c', implementação das funções em 'matriz.c', protótipos e definições de estruturas em 'matriz.h'.

## Exemplo de uso

Para compilar e rodar o exemplo de uso neste diretório (código original do programa matriz simétrica modularizado) basta utilizar o comando
a seguir:

```sh
make
```
