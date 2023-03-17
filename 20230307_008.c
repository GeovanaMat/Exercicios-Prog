#include <stdio.h>
#include <stdlib.h>
void troca(float *a, float *b){
    float g;
    g = *a;
    *a = *b;
     *b = g;
     printf(" a: %f, endereco: %d ; b: %f, endereco: %d",*a,a,*b,b);



}

int main(){
    float a = 5.0,b = 2.0;
    troca(&a,&b);
    printf(" \na: %f, endereco: %d ; b: %f, endereco: %d",a,&a,b,&b);
}


