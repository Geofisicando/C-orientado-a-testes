# Aula 42 - Exercício conversor de decimal em binário utilizando pilhas (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós iniciamos a resolução do exercício sobre a criação de um conversor de binário em decimal utilizando a estrutura de dados pilha implementando
a lógica de programação do conversor em um laço.
Utilizamos a pilha de números inteiros implementada nas
[Aulas 8-14](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/pilha/intro#aula-8---implementa%C3%A7%C3%A3o-de-uma-estrutura-de-dados-do-tipo-pilha-com-tdd) e a técnica das divisões sucessivas para realizar a conversão. Para isto, basta dividir o número em base decimal por dois e armazenar
os restos das divisões como a seguir (Exemplo com o número 30 em decimal):

Divisão	| Resultado	| Resto | --- |
--- | --- | --- | --- |
30/2	| 15	| 0	| LSD |
15/2	| 7	| 1	|
7/2 |	3	| 1 |	
|3/2	| 1	| 1 |	
1/2	| 0	| 1	| MSD |

Depois, basta organizar os valores armazenados do LSD significa Dígito Menos Significativo (Least Significant Digit) e MSD significa Dígito Mais Significativo (Most Significant Digit). Assim, o número 30 em decimal é igual a 11110 em binário.

# Aula 43 - Exercício conversor de decimal em binário utilizando pilhas (Parte 2)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós finalizamos a resolução do exercício sobre a criação de um conversor de binário em decimal utilizando a estrutura de dados pilha.
Nós utilizamos a pilha de números inteiros implementada nas
[Aulas 8-14](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/pilha/intro#aula-8---implementa%C3%A7%C3%A3o-de-uma-estrutura-de-dados-do-tipo-pilha-com-tdd) para armazenar os valores de cada divisão por dois do número em decimal durante as divisões sucessivas,
e depois exibimos chamando a função print da pilha.

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório, basta rodar o comando a seguir:

```sh
make
```
