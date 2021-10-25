#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void oursystem(const char *cmd){
	pid_t pid;
	int status;

	pid = fork();

	if(pid<0){
		fprintf(stderr,"%s: Erro na chamada de sistema fork!\n",__FILE__);
		exit(1);
	}else if(pid==0){ /* filho */
		execl("/bin/bash","bash","-c",cmd,(char*)NULL);
		exit(0);
	}else{ /* pai */
		waitpid(pid,&status,0);
		printf("Status do filho: %d\n",status);
		if(status!=0) fprintf(stderr,"Erro na execução do comando: %s\n",cmd);
	}
}

int main(void){
	oursystem("ls h");
}
