#include <math.h>

float hipotenusa(float cateto_a, float cateto_b){
/*< Calcula a hipotenusa dados os catetos a e b >*/
	if(cateto_b<0.01 || cateto_a < 0.01){
		return 0.0;
	}
	return sqrt(cateto_a*cateto_a+cateto_b*cateto_b);
}
