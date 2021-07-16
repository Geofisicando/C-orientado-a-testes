# Aula 48 - Como enviar e tratar sinais e processos no Linux com C (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta vídeo aula aprendemos o básico sobre sinais e processos no Linux. Mas oque é um sinal? Um sinal é uma forma de comunicação entre processos, e
processos são programas em execução. Em C nós podemos definir funções de resposta aos sinais utilizando a função signal a seguir:

```c
signal(15,tratasinal);
```

O primeiro parâmetro da função é o sinal e o segundo parâmetro é a função de resposta. Assim, quando este programa receber o sinal 15, ele irá
responder executando a função tratasinal.

# Aula 49 - Como enviar e tratar sinais e processos no Linux com C (Parte 2)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)


## Exemplo de uso

Você pode compilar e rodar o exemplo de uso deste diretório com o comando a seguir:

```sh
make
```
