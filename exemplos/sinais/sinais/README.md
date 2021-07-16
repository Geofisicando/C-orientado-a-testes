# Aula 48 - Como enviar e tratar sinais e processos no Linux com C (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta vídeo aula aprendemos o básico sobre sinais e processos no Linux. Mas oque é um sinal? Um sinal é uma forma de comunicação entre processos, e
processos são programas em execução. Em C nós podemos definir funções de resposta aos sinais utilizando a função signal a seguir:

```c
signal(15,tratasinal);
```

O primeiro parâmetro da função é o sinal e o segundo parâmetro é a função de resposta. Assim, quando este programa receber o sinal 15, ele irá
responder executando a função tratasinal que encerra a execução do processo.

# Aula 49 - Como enviar e tratar sinais e processos no Linux com C (Parte 2)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula implementamos outra função de resposta a um sinal enviado a este programa dando continuidade a aula anterior. Nós implementamos
a função para reiniciar o valor da variável global a para 0 quando o processo receber o sinal 15.

```c
signal(2,reinicia_a);
```

## Exemplo de uso

Você pode compilar e rodar o exemplo de uso deste diretório com o comando a seguir:

```sh
make
```

O programa sinais irá iniciar em um outro terminal e Makefile irá monitorar este programa a partir deste terminal enviando sinais ao processo.
Se você precisar encerrar o processo 'sinais.x' basta utilizar o seguinte comando:

```sh
killall sinais.x
```

Todos os processos com o nome 'sinais.x' serão encerrados. Outra forma de encerrar o processo é enviando o sinal -9 utilizando o comando kill,
para isto você irá precisar do PID do processo sinais, você pode obter o PID do processo utilizando o seguinte comando:

```sh
pidof sinais.x
```

E encerrar o processo sinais enviando o sinal -9 (substitua PID pelo PID do processo):

```sh
kill -9 PID
```
