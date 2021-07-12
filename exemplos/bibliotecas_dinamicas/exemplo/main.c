#include "_alloc.h"

int main(void){

        int i;
        int* array;

        array = intalloc(5);

        for(i=0;i<5;i++){
                array[i]=i;
                printf("%d\n",array[i]);
        }

        free(array);
        //array = intalloc(-1);
}
