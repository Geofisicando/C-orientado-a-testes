# Aula 80 - Implementação de um Daemon em C e utilização da syslog

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós implementamos um Daemon em linguagem C fazendo a chamada a função daemonize. Esta função é bem simples de utilizar.
Quando chamada em um processo, esta função transforma o processo em um daemon utilizando a técnica [fork and die](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/daemon/forkAndDie#aula-79---oque-%C3%A9-um-daemon-e-como-funciona-a-t%C3%A9cnica-fork-and-die). Basta utilizar como no
exemplo:

```c
daemonize();
```

Como o Daemon não tem saída para um terminal de controle,
nós utilizamos também a função syslog para gerar mensagens informativas no log do sistema, no arquivo '/var/log/syslog'. A utilização
da função utiliza dois parâmetros: Uma flag que informa o nível da mensagem e a string de mensagem formatada seguindo o padrão da
função printf. Basta utilizar como no exemplo:

```c
syslog(LOG_INFO, "O programa irá dormir por %d segundos...", 10);
```

A documentação sobre os níveis de mensagem pode ser encontrada no manual da função syslog, basta utilizar o seguinte comando no terminal:

```sh
man syslog
```

A implementação do esqueleto do Daemon segue um looping infinito que é executado a cada SLEEP_TIME segundos (Uma macro do pré processador utilizada para
definir o tempo em que o Daemon irá dormir). Então, o nosso Daemon executa uma tarefa, dorme por alguns segundos e depois retoma a execução.

```c
while (1) {
      syslog(LOG_INFO, "O programa irá dormir por %d segundos...", SLEEP_TIME);
      sleep(SLEEP_TIME);
      syslog(LOG_INFO, "O programa acordou!");
}
```

## Exemplo de uso

Para compilar o exemplo de uso deste diretório utilizando o Makefile basta utilizar o seguinte comando:

```sh
make
```

Isto irá gerar o executável 'gb_daemon'. Este programa pode ser executado diretamente com:

```sh
./gb_daemon
```

Ou, você pode utilizar o shell script de serviço do Daemon:

```sh
./gb_daemon_service start
```

Para verificar se o Daemon está rodando, basta mudar a opção 'start' para 'status' na chamada ao shell script de serviço do Daemon:

```sh
./gb_daemon_service status
```

Você também pode utilizar o comando 'ps' do shell. Após utilizar 'ps' filtre a saída com o 'grep':

```sh
ps -xj | grep gb_daemon
```

Por fim, para encerrar a execução do 'gb_daemon' você pode utilizar o shell script de serviço como a seguir:

```sh
./gb_daemon_service stop
```

Bem como utilizar o comando 'killall':

```sh
killalll gb_daemon
```
