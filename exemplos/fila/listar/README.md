# Aula 54 - Implementar uma estrutura de dados fila em C, função listar

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós implementamos a função 'listar' para listar os elementos da nossa estrutura de dados fila. A lógica de implementação da função é bastante
simples e também utiliza o conceito de recursão visto na [Aula 52](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/fila/inserir#aula-52---implementar-uma-estrutura-de-dados-fila-em-c-fun%C3%A7%C3%A3o-inserir-parte-1).
Após imprimir um elemento da fila no terminal com printf, a função 'listar' chama a si mesma passando a referência para a
próxima pessoa da fila, que por sua vez irá imprimir a próxima pessoa da fila na tela do terminal com printf e chamará
'listar' passando a próxima pessoa. E assim por diante até chegar ao final da fila.

```c
if(f==NULL) return;
printf("%s %d\n",f->nome,f->idade);
listar(f->prox);
```
