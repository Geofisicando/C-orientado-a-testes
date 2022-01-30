# Curso de linguagem C orientado a testes: Curso de C utilizando Test Driven Development (TDD)

> Material complementar do curso C orientado a testes: Do básico ao avançado. Disponível no [Youtube](https://www.youtube.com/watch?v=WDf6UWpKR60&list=PLLCFxfe9wkl-7q7q7s9e6qYo43oLB60I3&index=1&t=29s).

<img src="https://github.com/Geofisicando/C-orientado-a-testes/blob/main/C_orientado_a_testes.png" width=800>

## Dependências

Este curso utiliza o Unity framework de testes unitários em C e o depurador GDB (GNU debugger).

✅ Documentação oficial do GDB (GNU debugger): 
- https://www.gnu.org/software/gdb/documentation/

✅ Documentação oficial do Unity (framework de testes em c):  
- https://github.com/ThrowTheSwitch/Unity
- http://www.throwtheswitch.org/unity

## Índice
> Este material de apoio está em manutenção, alguns recursos ainda não estão disponíveis.

### Framework de testes unitários em C
  - [#0 - Como realizar teste unitário com o Unity](https://github.com/Geofisicando/C-orientado-a-testes/blob/main/exemplos/intro/README.md#aula-0---como-realizar-teste-unit%C3%A1rio-com-o-unity)
  - [#1 - Testes unitários de float e ignorar testes específicos](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/float_ignore#aula-1---testes-unit%C3%A1rios-de-float-e-ignorar-testes-espec%C3%ADficos)
  - [#2 - Teste unitários com strings e mensagens de erro do unity](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/strings_mensagem#aula-2---teste-unit%C3%A1rios-com-strings-e-mensagens-de-erro-do-unity)
  - [#3 - Como fazer arquivo Makefile para automatizar testes unitários do unity](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/Makefile_automatizar_testes#aula-3---como-fazer-arquivo-makefile-para-automatizar-testes-unit%C3%A1rios-do-unity)

### Oque é desenvolvimento orientado a testes?

   - [#4 - O que é Test Driven Development (TDD - Desenvolvimento orientado a testes)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/slides#aula-4---o-que-%C3%A9-test-driven-development-tdd---desenvolvimento-orientado-a-testes)
   - [#5 - Exemplo função para calcular a hipotenusa (Parte 1)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/hipotenusa#aula-5---exemplo-fun%C3%A7%C3%A3o-para-calcular-a-hipotenusa-parte-1)
   - [#6 - Exemplo função para calcular a hipotenusa (Parte 2)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/hipotenusa#aula-6---exemplo-fun%C3%A7%C3%A3o-para-calcular-a-hipotenusa-parte-2)
   - [#7 - O que é refatoração? Refatoração da função hipotenusa](https://github.com/Geofisicando/C-orientado-a-testes/blob/main/slides/README.md#aula-7---o-que-%C3%A9-refatora%C3%A7%C3%A3o-refatora%C3%A7%C3%A3o-da-fun%C3%A7%C3%A3o-hipotenusa)

### Desenvolvimento de uma Pilha com TDD

   - [#8 - Implementação de uma estrutura de dados do tipo Pilha com TDD](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/pilha/intro#aula-8---implementa%C3%A7%C3%A3o-de-uma-estrutura-de-dados-do-tipo-pilha-com-tdd)
   - [#9 - Função init (inicialização da Pilha)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/pilha/init#aula-9---fun%C3%A7%C3%A3o-init-inicializa%C3%A7%C3%A3o-da-pilha)
   - [#10 - Função empty (verificar se a Pilha está vazia)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/pilha/empty#aula-10---fun%C3%A7%C3%A3o-empty-verificar-se-a-pilha-est%C3%A1-vazia)
   - [#11 - Função push (empilhar elemento na Pilha)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/pilha/push#aula-11---fun%C3%A7%C3%A3o-push-empilhar-elemento-na-pilha)
   - [#12 - Função Top (verificar elemento no topo da Pilha)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/pilha/top#aula-12---fun%C3%A7%C3%A3o-top-verificar-elemento-no-topo-da-pilha)
   - [#13 - Função Pop (remover elemento do topo da pilha, desempilhar)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/pilha/pop#aula-13---fun%C3%A7%C3%A3o-pop-remover-elemento-do-topo-da-pilha-desempilhar)
   - [#14 - Função Print (exibir elementos da pilha no terminal)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/pilha/final#aula-14---fun%C3%A7%C3%A3o-print-exibir-elementos-da-pilha-no-terminal)

### Estratégias de depuração

   - [#15 - Como utilizar cores no terminal, em saídas de programas em C e no Unity](https://github.com/Geofisicando/C-orientado-a-testes/blob/main/exemplos/unity_output_color/README.md#aula-15---como-utilizar-cores-no-terminal-em-sa%C3%ADdas-de-programas-em-c-e-no-unity)
   - [#16 - Variáveis booleanas e implementação da interface stdbool em c](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/stdbool#aula-16---vari%C3%A1veis-booleanas-e-implementa%C3%A7%C3%A3o-da-interface-stdbool-em-c)
   - [#17 - Como fazer depuração (Debug) do código: Matriz simétrica (Parte 1)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/matrizSimetrica/modularizacao#aula-17---como-fazer-depura%C3%A7%C3%A3o-debug-do-c%C3%B3digo-matriz-sim%C3%A9trica-parte-1)
   - [#18 - Como fazer depuração (Debug) do código: Matriz simétrica (Parte 2)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/matrizSimetrica/configuracao#aula-18---como-fazer-depura%C3%A7%C3%A3o-debug-do-c%C3%B3digo-matriz-sim%C3%A9trica-parte-2)
   - [#19 - Como fazer depuração (Debug) do código: Matriz simétrica (Parte 3)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/matrizSimetrica/logging#aula-19---como-fazer-depura%C3%A7%C3%A3o-debug-do-c%C3%B3digo-matriz-sim%C3%A9trica-parte-3)
   - [#20 - Como fazer depuração (Debug) do código: Matriz simétrica (Parte 4)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/matrizSimetrica/corrigir_bug#aula-20---como-fazer-depura%C3%A7%C3%A3o-debug-do-c%C3%B3digo-matriz-sim%C3%A9trica-parte-4)
   - [#21 - Como fazer depuração (Debug) do código: Matriz simétrica (Parte 5)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/matrizSimetrica/final#aula-21---como-fazer-depura%C3%A7%C3%A3o-debug-do-c%C3%B3digo-matriz-sim%C3%A9trica-parte-5)

### Estratégias de refatoração

   - [#22 - Como funcionam o pré processamento e as macros em C](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/pre_processador#aula-22---como-funcionam-o-pr%C3%A9-processamento-e-as-macros-em-c)
   - [#23 - Refatoração do código da matriz simétrica (Parte 1)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/matrizSimetricaRefatoracao/intro#aula-23---refatora%C3%A7%C3%A3o-do-c%C3%B3digo-da-matriz-sim%C3%A9trica-parte-1)
   - [#24 - Refatoração do código da matriz simétrica (Parte 2)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/matrizSimetricaRefatoracao/codigo_duplicado#aula-24---refatora%C3%A7%C3%A3o-do-c%C3%B3digo-da-matriz-sim%C3%A9trica-parte-2)
   - [#25 - Refatoração do código da matriz simétrica (Parte 3)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/matrizSimetricaRefatoracao/codigo_duplicado#aula-25---refatora%C3%A7%C3%A3o-do-c%C3%B3digo-da-matriz-sim%C3%A9trica-parte-3)
   - [#26 - Refatoração do código da matriz simétrica (Parte 4)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/matrizSimetricaRefatoracao/final#aula-26---refatora%C3%A7%C3%A3o-do-c%C3%B3digo-da-matriz-sim%C3%A9trica-parte-4)
   - [#27 - As macros assert e NDEBUG da biblioteca assert.h](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/assert_ndebug#aula-27---as-macros-assert-e-ndebug-da-biblioteca-asserth)

### Depuração profissional com o GDB

   - [#28 - Como depurar um programa em C de maneira profissional? O depurador GDB](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/intro#aula-28---como-depurar-um-programa-em-c-de-maneira-profissional-o-depurador-gdb)
   - [#29 - Comandos básicos do GDB: run, start, next, print e break](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/comandos_basicos#aula-29---comandos-b%C3%A1sicos-do-gdb-run-start-next-print-e-break)
   - [#30 - Depurar um programa passo a passo com breakpoints do GDB](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/programa_simples#aula-30---depurar-um-programa-passo-a-passo-com-breakpoints-do-gdb)
   - [#31 - Depuração de funções de bibliotecas em C com o comando step do GDB](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/step#aula-31---depura%C3%A7%C3%A3o-de-fun%C3%A7%C3%B5es-de-bibliotecas-em-c-com-o-comando-step-do-gdb)
   - [#32 - Exercício de depuração com o GDB](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/bug_funcao#aula-32---exerc%C3%ADcio-de-depura%C3%A7%C3%A3o-com-o-gdb)
   - [#33 - O modo de depuração Text User Interface (TUI) do GDB](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/tui#aula-33---o-modo-de-depura%C3%A7%C3%A3o-text-user-interface-tui-do-gdb)
   - [#34 - Exibir o código fonte no terminal do GDB](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/list#aula-34---exibir-o-c%C3%B3digo-fonte-no-terminal-do-gdb)
   - [#35 - Monitorar variáveis no GDB com o comando display](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/display#aula-35---monitorar-vari%C3%A1veis-no-gdb-com-o-comando-display)
   - [#36 - Monitorando a pilha e os frames no GDB](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/pilha_e_frames#aula-36---monitorando-a-pilha-e-os-frames-no-gdb)
   - [#37 - Chamar funções, executar comandos do Shell e Makefiles no GDB](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/shell_make#aula-37---chamar-fun%C3%A7%C3%B5es-executar-comandos-do-shell-e-makefiles-no-gdb)
   - [#38 - Depuração automatizada com GDB scripts](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/gdb_scripts#aula-38---depura%C3%A7%C3%A3o-automatizada-com-gdb-scripts)
   - [#39 - Gerar arquivos de logging no GDB](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/logging#aula-39---gerar-arquivos-de-logging-no-gdb)
   - [#40 - Como corrigir erros de segmentação e monitorar ponteiros no GDB](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/sigsegv#aula-40---como-corrigir-erros-de-segmenta%C3%A7%C3%A3o-e-monitorar-ponteiros-no-gdb)

### Exercícios sobre Pilhas em C

   - [#41 - Exercícios sobre Estrutura de dados Pilha](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/exercicios_pilha#aula-41---exerc%C3%ADcios-sobre-estrutura-de-dados-pilha)
   - [#42 - Exercício conversor de decimal em binário utilizando pilhas (Parte 1)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/exercicios_pilha/conversor#aula-42---exerc%C3%ADcio-conversor-de-decimal-em-bin%C3%A1rio-utilizando-pilhas-parte-1)
   - [#43 - Exercício conversor de decimal em binário utilizando pilhas (Parte 2)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/exercicios_pilha/conversor#aula-43---exerc%C3%ADcio-conversor-de-decimal-em-bin%C3%A1rio-utilizando-pilhas-parte-2)
   - [#44 - Exercício sistema de entrega de pizzas utilizando pilhas (Parte 1)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/exercicios_pilha/sistema_entregas_pizza#aula-44---exerc%C3%ADcio-sistema-de-entrega-de-pizzas-utilizando-pilhas-parte-1)
   - [#45 - Exercício sistema de entrega de pizzas utilizando pilhas (Parte 2)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/exercicios_pilha/sistema_entregas_pizza#aula-45---exerc%C3%ADcio-sistema-de-entrega-de-pizzas-utilizando-pilhas-parte-2)
   - [#46 - Exercício sistema de entrega de pizzas utilizando pilhas (Parte 3)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/exercicios_pilha/sistema_entregas_pizza#aula-46---exerc%C3%ADcio-sistema-de-entrega-de-pizzas-utilizando-pilhas-parte-3)
   - [#47 - Exercício sistema de entrega de pizzas utilizando pilhas (Parte 4)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/exercicios_pilha/sistema_entregas_pizza#aula-47---exerc%C3%ADcio-sistema-de-entrega-de-pizzas-utilizando-pilhas-parte-4)

### Básico de sinais e processos no Linux

   - [#48 - Como enviar e tratar sinais e processos no Linux com C (Parte 1)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/sinais/tratasinais#aula-48---como-enviar-e-tratar-sinais-e-processos-no-linux-com-c-parte-1)
   - [#49 - Como enviar e tratar sinais e processos no Linux com C (Parte 2)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/sinais/tratasinais#aula-49---como-enviar-e-tratar-sinais-e-processos-no-linux-com-c-parte-2)
   - [#50 - Automatizar envio de sinais ao processo com um programa de monitoramento](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/sinais/monitor#aula-50---automatizar-envio-de-sinais-ao-processo-com-um-programa-de-monitoramento)

### Desenvolvimento de uma Fila em C com o GDB

   - [#51 - Como implementar uma estrutura de dados fila em C, função criar fila](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/fila/intro#aula-51---como-implementar-uma-estrutura-de-dados-fila-em-c-fun%C3%A7%C3%A3o-criar-fila)
   - [#52 - Implementar uma estrutura de dados fila em C, função inserir (Parte 1)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/fila/inserir#aula-52---implementar-uma-estrutura-de-dados-fila-em-c-fun%C3%A7%C3%A3o-inserir-parte-1)
   - [#53 - Implementar uma estrutura de dados fila em C, função inserir (Parte 2)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/fila/inserir#aula-53---implementar-uma-estrutura-de-dados-fila-em-c-fun%C3%A7%C3%A3o-inserir-parte-2)
   - [#54 - Implementar uma estrutura de dados fila em C, função listar](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/fila/listar#aula-54---implementar-uma-estrutura-de-dados-fila-em-c-fun%C3%A7%C3%A3o-listar)
   - [#55 - Implementar uma estrutura de dados fila em C, função apagar](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/fila/apagar#aula-55---implementar-uma-estrutura-de-dados-fila-em-c-fun%C3%A7%C3%A3o-apagar)
   - [#56 - Implementar os testes da estrutura de dados fila (Parte 1)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/fila/testes#aula-56---implementar-os-testes-da-estrutura-de-dados-fila-parte-1)
   - [#57 - Implementar os testes da estrutura de dados fila (Parte 2)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/fila/testes#aula-57---implementar-os-testes-da-estrutura-de-dados-fila-parte-2)

### Depuração de vetores e alocação dinâmica

   - [#58 - Como fazer a depuração de vetores no GDB? Alocação estática e dinâmica](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/vetores#aula-58---como-fazer-a-depura%C3%A7%C3%A3o-de-vetores-no-gdb-aloca%C3%A7%C3%A3o-est%C3%A1tica-e-din%C3%A2mica)
   - [#59 - Criar uma função de alocação dinâmica personalizada em c (Parte 1)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/alloc#aula-59---criar-uma-fun%C3%A7%C3%A3o-de-aloca%C3%A7%C3%A3o-din%C3%A2mica-personalizada-em-c-parte-1)
   - [#60 - Criar uma função de alocação dinâmica personalizada em c (Parte 2)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/alloc#aula-60---criar-uma-fun%C3%A7%C3%A3o-de-aloca%C3%A7%C3%A3o-din%C3%A2mica-personalizada-em-c-parte-2)
   - [#61 - Função de alocação dinâmica personalizada de strings em c](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/alloc#aula-61---fun%C3%A7%C3%A3o-de-aloca%C3%A7%C3%A3o-din%C3%A2mica-personalizada-de-strings-em-c)
   - [#62 - Alocação dinâmica de vetores de structs em C](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/alloc#aula-62---aloca%C3%A7%C3%A3o-din%C3%A2mica-de-vetores-de-structs-em-c)
   - [#63 - Inicialização de vetores de structs em C](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/alloc#aula-63---inicializa%C3%A7%C3%A3o-de-vetores-de-structs-em-c)
   - [#64 - Utilizando variáveis durante a depuração com GDB](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/GDB/gdb_vars#aula-64---utilizando-vari%C3%A1veis-durante-a-depura%C3%A7%C3%A3o-com-gdb)
   - [#65 - Como testar ponteiros em linguagem C utilizando o Unity](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/teste_ponteiros#aula-65---como-testar-ponteiros-em-linguagem-c-utilizando-o-unity)
   - [#66 - Como testar arrays em linguagem C utilizando o Unity](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/teste_arrays#aula-66---como-testar-arrays-em-linguagem-c-utilizando-o-unity)
   - [#67 - Como testar vetores de structs em linguagem C utilizando o Unity](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/teste_structs#aula-67---como-testar-vetores-de-structs-em-linguagem-c-utilizando-o-unity)
   - [#68 - Criar um separador de strings em C na forma chave=valor (Parte 1)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/string_sep#aula-68---criar-um-separador-de-strings-em-c-na-forma-chavevalor-parte-1)
   - [#69 - Criar um separador de strings em C na forma chave=valor (Parte 2)](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/string_sep#aula-69---criar-um-separador-de-strings-em-c-na-forma-chavevalor-parte-2)

### Bibliotecas estáticas e dinâmicas

- [#70 - Como criar bibliotecas estáticas e dinâmicas em C (Parte 1)](https://github.com/Geofisicando/C-orientado-a-testes/blob/main/exemplos/bibliotecas_estaticas/README.md#aula-70---como-criar-bibliotecas-est%C3%A1ticas-e-din%C3%A2micas-em-c-parte-1)
- [#71 - Como criar bibliotecas estáticas e dinâmicas em C (Parte 2)](https://github.com/Geofisicando/C-orientado-a-testes/blob/main/exemplos/bibliotecas_dinamicas/README.md#aula-71---como-criar-bibliotecas-est%C3%A1ticas-e-din%C3%A2micas-em-c-parte-2)

### Chamadas de sistema no Linux

- [#72 - Oque são as chamadas de sistema (syscalls) no Linux? Como criar processos](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/syscalls/intro#aula-72---oque-s%C3%A3o-as-chamadas-de-sistema-syscalls-no-linux-como-criar-processos)
- [#73 - Criar processos no Linux, a chamada de sistema fork](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/syscalls/fork#aula-73---criar-processos-no-linux-a-chamada-de-sistema-fork)
- [#74 - As chamadas de sistema wait e exec no Linux](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/syscalls/wait_exec#aula-74---as-chamadas-de-sistema-wait-e-exec-no-linux)
- [#75 - Como rodar um comando ou script do shell em um programa em C](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/system#aula-75---como-rodar-um-comando-ou-script-do-shell-em-um-programa-em-c)
- [#76 - A função system e a chamada de sistema waitpid](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/system#aula-76---a-fun%C3%A7%C3%A3o-system-e-a-chamada-de-sistema-waitpid)
- [#77 - Como obter o valor de uma variável de ambiente do shell em C](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/getenv#aula-77---como-obter-o-valor-de-uma-vari%C3%A1vel-de-ambiente-do-shell-em-c)

### Implementação de um Daemon em linguagem C

- [#78 - Como implementar um daemon em C: Introdução e estrutura das aulas](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/daemon#aula-78---como-implementar-um-daemon-em-c-introdu%C3%A7%C3%A3o-e-estrutura-das-aulas)
- [#79 - Oque é um Daemon e como funciona a técnica fork and die?](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/daemon#aula-79---oque-%C3%A9-um-daemon-e-como-funciona-a-t%C3%A9cnica-fork-and-die)
- [#80 - Implementação de um Daemon em C e utilização da syslog](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/daemon#aula-80---implementa%C3%A7%C3%A3o-de-um-daemon-em-c-e-utiliza%C3%A7%C3%A3o-da-syslog)
- [#81 - Implementação da função daemonize e da técnica fork and die](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/daemon#aula-81---implementa%C3%A7%C3%A3o-da-fun%C3%A7%C3%A3o-daemonize-e-da-t%C3%A9cnica-fork-and-die)
