# Aula 78 - Como implementar um daemon em C: Introdução e estrutura das aulas

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós apresentamos uma visão geral sobre os daemons e a estrutura das próximas aulas onde iremos aprender a criar um daemon em linguagem C.

**Oque é um Daemon?** Um Daemon é um serviço que roda em background do sistema operacional, ele tem como objetivo ser associado a uma aplicação principal, mas funcionando de forma paralela a ela. Os sistemas geralmente inicializam daemons no momento do boot e servem a função de responder a requisições de rede, atividade de hardware ou outros programas por meio da realização de algumas tarefas. Daemons podem também configurar o hardware, executar tarefas agendadas (como cron) e realizar uma variedade de outras tarefas.

A estrutura das nossas aulas sobre Daemons a seguir:

* **Aula 1 - Teoria:** Nesta aula nós iremos aprender oque é um daemon, oque é a técnica "fork and die" e quais são as etapas necessárias para transformar os nossos processos em daemons utilizando a linguagem C.

* **Aula 2 - Implementação do daemon:** Nesta aula nós iremos transformar um programa escrito em linguagem C em um daemon utilizando a chamada à função daemonize e também iremos aprender a criar um Shell Script de serviço do daemon para iniciar, obter o status de execução e encerrar o daemon.

* **Aula 3 - Função daemonize:** Por fim, nesta aula nós iremos aprender em detalhes a implementação da função daemonize que transforma o processo chamador em um daemon utilizando a técnica "fork and die".

# Aula 81 - Configurar o Daemon e o script de serviço do init

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

# Aula 82 - Implementação da função daemonize e da técnica fork and die (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

# Aula 83 - Implementação da função daemonize e da técnica fork and die (Parte 2)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

# Aula 84 - Implementação da função daemonize e da técnica fork and die (Parte 3)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

### Referências:

* Tutorial sobre Daemons (GBzando - Programação, infraestrutura e redes na prática): 
  * https://www.gbzando.com.br/daemons/
  * https://www.gbzando.com.br/daemons-2/
  * https://www.gbzando.com.br/servicos-linux/
* [Terminal de Informação: Oque são Daemons?](https://terminaldeinformacao.com/2020/07/21/o-que-sao-daemons/)
* [Stack Overflow: What is the reason for performing a double fork when creating a daemon?](https://stackoverflow.com/questions/881388/what-is-the-reason-for-performing-a-double-fork-when-creating-a-daemon)
* [Wikipédia: Daemon (computação)](https://pt.wikipedia.org/wiki/Daemon_(computa%C3%A7%C3%A3o))
* [Wikipédia: Umask](https://pt.wikipedia.org/wiki/Umask)
* [Stack Overflow: Creating a daemon in Linux](https://stackoverflow.com/questions/17954432/creating-a-daemon-in-linux/17955149#17955149)
* [Stack Exchange: What are "session leaders" in ps?](https://unix.stackexchange.com/questions/18166/what-are-session-leaders-in-ps)
