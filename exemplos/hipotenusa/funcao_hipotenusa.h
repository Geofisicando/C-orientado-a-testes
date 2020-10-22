#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float hipotenusa(float a, float b){
	if(b<0.01 || a < 0.01){
		return 0.0;
	}
	return sqrt(a*a+b*b);
}
