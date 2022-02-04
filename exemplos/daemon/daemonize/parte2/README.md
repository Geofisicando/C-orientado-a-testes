# Aula 83 - Implementação da função daemonize e da técnica fork and die (Parte 2)

Nesta aula, nós demos continuidade a implementação da função daemonize.

## Tornar o primeiro processo filho líder de sessão e ignorar sinais

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Seguindo com a implementação da função daemonize que transforma o processo chamador em um Daemon, nós tornamos o primeiro processo filho,
criado na aula anterior ([Aula 82](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/daemon/daemonize/parte1#aula-82---implementa%C3%A7%C3%A3o-da-fun%C3%A7%C3%A3o-daemonize-e-da-t%C3%A9cnica-fork-and-die-parte-1)), líder de sessão. Isto fará com que o
primeiro processo filho desacople do seu terminal de controle. Para isto, nós utilizamos a função 'setsid' como a seguir:

```c
    /* Criar nova sessão e tornar o primeiro filho líder desta sessão */
    if (setsid() < 0) {
        exit(1); // erro
    }
 ```
 
 A função 'setsid' cria uma nova sessão e torna o processo chamador líder da nova sessão criada. Esta função retornará um número negativo se
 a criação da nova sessão falhar.
 
 ## Segundo fork and die
