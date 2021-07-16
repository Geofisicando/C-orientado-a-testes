# Aula 50 - Automatizar envio de sinais ao processo com um programa de monitoramento

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós implementamos um programa para monitorar um processo enviando sinais. O programa 'monitor.x' recebe o PID de um processo (programa em execução)
através de leitura com scanf e envia sinais a este processo utilizando a função kill. A função kill recebe dois parâmetros, o primeiro é uma variável
de tipo pid_t que armazena o PID do processo e o segundo é o sinal a ser enviado ao processo:

```c
k = kill(pid,2);
```

O programa 'sinais.x', desenvolvido nas aulas [48](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/sinais/tratasinais#aula-48---como-enviar-e-tratar-sinais-e-processos-no-linux-com-c-parte-1) e [49](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/sinais/tratasinais#aula-49---como-enviar-e-tratar-sinais-e-processos-no-linux-com-c-parte-2), tem funções especiais para o tratamento dos sinais passados pelo programa monitor.
Ao receber o sinal 2 o programa 'sinais.x' atualiza o valor da variável global a e ao receber o sinal 15 encerra a execução. Assim, o programa
'monitor.x' pode controlar a execução de 'sinais.x'.

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório basta utilizar o seguinte comando:

```sh
make
```

O programa sinais irá iniciar em um outro terminal e o programa monitor irá monitorar este programa a partir deste terminal enviando sinais ao processo.
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
