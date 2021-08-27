# Aula 42 - Exercício conversor de decimal em binário utilizando pilhas (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós iniciamos a resolução do exercício sobre a criação de um conversor de binário em decimal utilizando a estrutura de dados pilha implementando
a lógica de programação do conversor em um laço.
Utilizaremos a técnica das divisões sucessivas para realizar a conversão. Para isto, basta dividir o número em base decimal por dois e armazenar
os restos das divisões como a seguir (Exemplo com o número 30 em decimal):


Divisão	Resultado	Resto	
30/2	15	0	LSD
15/2	7	1	
7/2	3	1	
3/2	1	1	
1/2	0	1	MSD

Depois, basta organizar os valores armazenados do LSD significa Dígito Menos Significativo (Least Significant Digit) e MSD significa Dígito Mais Significativo (Most Significant Digit). Assim, o número 30 em decimal é igual a 11110 em binário.

# Aula 43 - Exercício conversor de decimal em binário utilizando pilhas (Parte 2)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)
