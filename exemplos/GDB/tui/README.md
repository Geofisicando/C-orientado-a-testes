# Aula 33 - O modo de depuração Text User Interface (TUI) do GDB

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a utilizar o modo Text User Interface no GDB. Uma ferramente que auxília na visualização em texto do seu código
em modo debug via GDB. Com ele você pode acompanhar no seu código passo a passo.

Para abrir o gdb diretamente em modo TUI, utilize o comando a seguir (main.x é o programa a ser depurado no GDB):

```sh
gdb main.x -tui
```

**Dicas:** Utilize os comandos do GDB aprendidos nas aulas anteriores no console do GDB em modo TUI. Utilize também as setas direcionais para visualizar o
código. Ao criar um breakpoint, este irá aparecer na linha correspondente na janela onde aparece o código fonte como um **b** (b+ significa que o breakpoint está
habilitado e b- que está desabilitado).

* **Ctrl+x+a:** Entrar/Sair do modo TUI.

* **layout src:** Ao digitar 'layout src' no console do terminal do GDB, o modo TUI é ativado.

### Exemplo de uso

Você pode compilar o programa main.c com 'make', e o binário será gerado já com a lista de símbolos do GDB, para você treinar os comandos desta aula. Se você desejar fazer a compilação diretamente pelo terminal do shell utilize o seguinte comando de compilação:

```sh
gcc -g main.c -o main.x
```

Daí, para carregar o binário executável no GDB, basta utilizar o comando a seguir:

```sh
gdb main.x
```
