/*
* daemon.c (C)
* 
* Objetivo: Implementação da função daemonize.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 28/10/2019
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include <stdlib.h>
#include <signal.h>
#include <sys/resource.h>
#include <fcntl.h>
#include "daemon.h"
#include <unistd.h>
#include <sys/stat.h>

void daemonize(void)
/*< Transformar o processo chamador em um Daemon >*/
{
    int i = 0;
    pid_t pid = 0;
    struct rlimit rlimit;

    /* primeito fork and die (para gerar o primeiro filho) */
    pid = fork();
    if (pid >= 0) {
        if (pid != 0) { // Encerrar o pai
            exit(0);
        }
    } else { // erro
        exit(1);
    }
    
    /* Criar nova sessão e tornar o primeiro filho líder desta sessão */
    if (setsid() < 0) {
        exit(1); // erro
    }
    
    /* Ignorar sinal SIGHUP */
    if ((signal(SIGHUP, SIG_IGN) == SIG_ERR)) {
        exit(1); // erro
    }
    
    /* Segundo fork and die (Para gerar o segundo filho) */
    pid = fork();
    if (pid >= 0) {
        if (pid != 0) { // Encerrar o primeiro filho
            exit(0);
        }
    } else { // erro
        exit(1);
    }
    
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
}

