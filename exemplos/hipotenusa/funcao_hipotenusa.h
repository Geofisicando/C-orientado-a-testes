/*
* funcao_hipotenusa.h (C)
* 
* Objetivo: Função hipotenusa para teste.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves 12/07/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/


#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float hipotenusa(float a, float b){
	if(b<0.01 || a < 0.01){
		return 0.0;
	}
	return sqrt(a*a+b*b);
}
