
# Aula 81 - Configurar o Daemon e o script de serviço do init

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a configurar o script de serviço do Daemon e fazer a instalação do daemon e do script de serviço para que o Daemon seja filho direto
do processo _init_. Também aprendemos a utilizar o comando service para iniciar, ver o status e parar a execução do Daemon.

As mudanças no nosso shell script de serviço do Daemon são apenas para mudar a variável $COMMAND para o novo local de instalação do 'gb_daemon' em
'/usr/local/bin'. Fizemos a seguinte alteração na [linha 18](https://github.com/Geofisicando/C-orientado-a-testes/blob/65b21f06744decc87b696e406c0287c0b023683a/exemplos/daemon/initScript/gb_daemon_service#L18):

```sh
COMMAND="/usr/local/bin/$GB_DAEMON"
```

Daí fazemos a instalação do 'gb_daemon' em '/usr/local/bin' fazendo a cópia do executável utilizando o comando 'cp',
esta operação precisa ser realizada como superusuário:

```sh
sudo cp gb_daemon /usr/local/bin/
```

Depois fazemos a instalação do shell script de serviço do Daemon em '/etc/init.d':

```sh
sudo cp gb_daemon_service /etc/init.d/
```

Daí podemos iniciar, ver o status e encerrar o 'gb_daemon' com o shell script de serviço como segue:

```sh
/etc/init.d/gb_daemon_service start
```

```sh
/etc/init.d/gb_daemon_service status
```

```sh
/etc/init.d/gb_daemon_service stop
```

O nosso Daemon continuará sendo adotado pelo systemd com PPID diferente de 1. Podemos observar isto executando o comando 'ps' a seguir
durante a execução do 'gb_daemon':

```sh
ps -xj | grep gb_daemon
```

A primeira coluna será o PPID dos processos. E será diferente de 1 indicando que o nosso 'gb_daemon' não é filho direto de _init_.

Para fazer com que o  'gb_daemon' 
