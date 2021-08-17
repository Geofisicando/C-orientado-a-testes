# Aula 72 - Oque são as chamadas de sistema (syscalls) no Linux? Como criar processos

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos oque são as chamadas de sistema (syscalls) no Linux e também
entendemos como o Linux cria novos processos a partir da chamada de sistema fork.

Uma _chamada de sistema_ é uma rotina oferecida pelo Sistema Operacional (SO)
às aplicações de usuário para que elas possam solicitar recursos. Um _processo_ (programa em execução)
não pode interagir diretamente com os recursos que o SO controla, por isso as chamadas de sistema oferecem
uma interface para tratar a comunicação dos processos com dispositivos externos, outros programas, sistemas de arquivos e etc.

Dentre as chamadas de sistema existentes no Linux, uma das mais importantes é a chamada de sistema _fork_.
Com esta chamada de sistema, o processo chamador (processo Pai), pode solicitar ao SO que crie uma cópia dele.
Esta cópia do processo chamador será um novo processo (processo Filho), com um novo espaço de endereços.

As duas cópias seguem a sua execução de maneira independente, pois são dois processos diferentes e
com espaços de memória diferentes. A compreensão do funcionamento da chamada de sistema fork é vital
para entender como os processos são criados no Linux.


