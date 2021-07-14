/*
* exemplo.c (C)
* 
* Objetivo: Função separadora de strings na forma 'chave=valor'.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves 14/07/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_sep(const char* keyval){
/*< Separar string chave=valor usando '=' como delimitador >*/
	char *eq, *key;
	size_t keylen;

	eq = strchr(keyval,'=');
	if(eq==NULL) return;
	eq++;

	keylen = (size_t) (eq-keyval);
	key = (char*) malloc(keylen*sizeof(char));
	memcpy(key,keyval,keylen);
	key[keylen-1]='\0';
	printf("chave=%s valor=%s\n",key,eq);
}

int main(void){
	string_sep("par1=100");
}
