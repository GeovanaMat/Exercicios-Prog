#include <stdio.h>
#include <stdlib.h>

void imprimir(float *numero1,float *numero2){
    for (;numero1 <= numero2; numero1++){
        printf("%f\n",*numero1);
    }

}

int main()
{
    float vet[3] = {2.0,2.4,4.5};
    imprimir(&vet[0],&vet[2]);
    printf("\n");
    float vet2[5] = {2.0,2.4,4.5,9.7,5.6};
    imprimir(&vet2[0],&vet2[4]);
     printf("\n");
    float vet3[2] = {2.0,2.9};
    imprimir(&vet2[0],&vet2[1]);



}
