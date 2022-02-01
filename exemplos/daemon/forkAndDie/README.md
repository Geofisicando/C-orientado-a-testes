# Aula 79 - Oque é um Daemon e como funciona a técnica fork and die?

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Originalmente, um Daemon é um tipo de ser na mitologia grega que auxiliam as ações dos humanos.
Um Daemon é como um ser sobrenatural trabalhando em plano de fundo, sem viés particular, para o bem ou para o mal.
Este termo é emprestado para a computação para designar serviços que rodam no background do sistema operacional.

Os Daemons são processos que não estão vinculados a nenhum terminal e, geralmente mas nem sempre, são filhos do processo _init_, o primeiro processo
inciado com a inicialização do Sistema Operacional. Para tornar o processo em um Daemon podemos utilizar a técnica _fork and die_ cujos passos são descritos
a seguir:

[ERRATA] A etapa de ignorar os sinais é realizada antes do segundo "fork and die", a lista de passos a seguir foi corrigida.

1.  Realizar a chamada de sistema fork no processo para criar o primeiro filho e logo em seguida chamar exit no processo pai. Por causa da finalização do processo pai, o filho agora é executado em background.
2.  Criar uma nova sessão e tornar o primeiro filho líder desta sessão. Isto fará o primeiro filho ser desacoplado do terminal herdado do pai.
3.  Ignorar ou tratar sinais para impedir que o processo seja encerrado.
4.  O primeiro filho chama fork mais uma vez, criando assim o segundo filho, e depois encerra. Assim, o processo líder de sessão (primeiro filho) é eliminado. Apenas os líderes de sessão poder conseguir um terminal outra vez.
5.  Mudar o diretório de trabalho para o diretório raíz "/" (ou root) com a função chdir.
6.  Setar a máscara de permissões padrão para o daemon com a função umask.
7.  Fechar todos os descritores de arquivo que possam ter sido herdados do processo pai.

Estes passos são seguidos internamente pela função _daemonize_, ao realizá-los, a função transforma o processo chamador em um _Daemon_.
