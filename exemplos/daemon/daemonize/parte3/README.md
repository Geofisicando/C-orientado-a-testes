# Aula 84 - Implementação da função daemonize e da técnica fork and die (Parte 3)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós finalizamos a implementação da função daemonize. Começamos configurando as máscaras padrão de permissão para
arquivos e diretórios utilizando a função 'umask':

```c
    /* Setar a máscara de permissões padrão */ 
    umask(0);
```

Esta função determina as permissões padrão para novos arquivos e diretórios criados. Setar a umask como 0 siginifica que os novos
arquivos e diretórios criados não terão privilégios inicialmente, ou seja, poderão ser lidos e alterados por qualquer usuário. Este
não é o ideal, obviamente. Assim, o ideal após setar umask como 0 é configurar explicitamente as permissões necessárias para arquivos
e diretórios com a função 'chmod'.

```c
    /* Mudar o diretório de trabalho para o diretório raíz */
    if (chdir("/") < 0) {
        exit(1); // erro
    }
    
    /* Fechar todos os descritores de arquivo */
    if (getrlimit(RLIMIT_NOFILE, &rlimit) < 0) {
        exit(1); // erro
    }
    
    for (i = 0; i < rlimit.rlim_max; i++) {
        close(i);
    }
    
    /* redirecionar stdin/stdout/stderr para /dev/null */
    open("/dev/null", O_RDONLY);
    open("/dev/null", O_RDWR);
    open("/dev/null", O_RDWR);
```
