# Aula 26 - Refatoração do código da matriz simétrica (Parte 4)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós finalizamos a refatoração do código da matriz simétrica. A última etapa desenvolvida foi a refatoração dos nomes de variáveis das funções. Todavia, você deve estar se perguntando agora: "Qual a relevância de gastar tanto tempo para escolher nomes de variáveis se o código já estava funcionando?". Aqui vão algumas justificativas ([Clean Code - Nomes significativos](http://tech.azi.com.br/clean-code-parte-1-nomes-significativos/)):

* Se a variável não passa o contexto ao programador, ela se torna um enigma dentro do código que exigirá um tempo para que o leitor do código a decifre. Mesmo que o trecho tenha comentários explicativos se torna uma maneira ruim de declarar a variável, ferindo várias regras impostas a nomenclatura. A melhor forma é se expressar por meio dos nomes, sendo claro e objetivo, demonstrando a sua intenção para aquele trecho. 

* A leitura do código se torna mais intuitiva desta maneira, podemos passar ao leitor o que será feita com essa variável ou a finalidade para que foi criada. Claro que quantidade não é sinal de qualidade, então procure minimizar os nomes o quanto puder e, durante o desenvolvimento, sempre pensar em nomes melhores para atribuir aos elementos para gerar maior clareza. Quando pensamos em expressividade através dos nomes podemos ser levados a alguns erros que ocorrem apenas pela perspectiva do leitor, então a próxima recomendação é sobre informações transmitidas de forma errada.
 
### Exemplo de uso

Você pode compilar e rodar este exemplo de uso com o programa 'make'. Para compilar e rodar o programa principal utilize o comando a seguir:

```sh
make
```

Para compilar e rodar os testes utilize o comando a seguir:

```sh
make test
```
