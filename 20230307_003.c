#include <stdio.h>
#include <stdlib.h>
int main(){

    int valor1 = 2;
    float valor2 = 3.0;
    char valor3 = 'a';

    int *valora= &valor1;
    float *valorb = &valor2;
    char *valorc = &valor3;

    printf(" valor1: %d, valor2: %f, valor3: %c \n",valor1,valor2,valor3);

    *valora = 5;
    *valorb = 8.0;
    *valorc = 'c';

    printf("valor 1: %d, valor2: %f, valorc: %c", valor1,valor2,valor3);

}


