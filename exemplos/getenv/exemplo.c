#include <stdio.h>
#include <stdlib.h>

int main(void){
	printf("HOME: %s\n",getenv("HOME"));
	printf("LINES: %s\n",getenv("LINES"));
	printf("COLUMNS: %s\n",getenv("COLUMNS"));
	printf("VAR: %s\n",getenv("VAR"));
}
