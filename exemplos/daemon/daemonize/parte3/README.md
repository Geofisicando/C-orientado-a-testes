# Aula 84 - Implementação da função daemonize e da técnica fork and die (Parte 3)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

```c
    /* Setar a máscara de permissões padrão */ 
    umask(0);
    
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
