/*
* funcao_hipotenusa.h (C)
* 
* Objetivo: Função hipotenusa do exemplo de refatoração.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves 13/07/2021
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include <math.h>

float hipotenusa(float cateto_a, float cateto_b){
/*< Calcula a hipotenusa dados os catetos a e b >*/
	if(cateto_b<0.01 || cateto_a < 0.01){
		return 0.0;
	}
	return sqrt(cateto_a*cateto_a+cateto_b*cateto_b);
}
