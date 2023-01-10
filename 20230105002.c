#include <stdio.h>
#include <stdlib.h>

int peso,tempgest;

int bebes() {
    scanf("%d%d",&peso,&tempgest);

}

void validar(){
    if (peso < 100 || tempgest < 28){
        printf ("Parto não deverá ser realizado, reavaliar clinicamente");

    }
    else if (peso > 2500 && tempgest > 28){
        printf("Parto normal");
    }
    else if(peso > 2500 && tempgest <= 28){

        printf("Parto Cesariana");
    }
    else if (peso >= 1500 && peso <= 2000 && tempgest > 36){
        printf("Parto normal");
    }
    else{
        printf("Parto cesarina");
    }
}

int main()
{
    bebes();
    validar();

}
