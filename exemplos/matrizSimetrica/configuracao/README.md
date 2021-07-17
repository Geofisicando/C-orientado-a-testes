# Aula 18 - Como fazer depuração (Debug) do código: Matriz simétrica (Parte 2)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós configuramos o Makefile e a suíte de testes para o Unity framework de testes unitários em C para dar início aos nossos
testes da depuração do programa da matriz simétrica. O primeiro passo é compreender o problema da  matriz simétrica.

### Oque é uma matriz simétrica?

Uma matriz simétrica é uma matriz quadrada (número de linhas igual ao número de colunas) em que os elementos Ai,j são iguais os elementos
Aj,i. Ou seja, os elementos acima e abaixo da diagonal principal estão espelhados. Veja o exemplo a seguir:

```
1 2 3
2 7 2
3 2 4
```

Na matriz acima, apesar dos elementos da diagonal principal serem diferente {1,7,4}, os elementos acima e abaixo da diagonal principal estão "espelhados"
e a matriz é quadrada, tem o número de linhas igual ao número de colunas. Por isso, esta matriz é simétrica.
