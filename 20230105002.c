#include <stdio.h>
#include <stdlib.h>

int peso,tempgest;

int bebes() {
    scanf("%d",peso,tempgest);

}

void validar(){
    if (peso < 100 || tempgest < 28){
        printf ("Parto n�o dever� ser realizado, reavaliar clinicamente");

    }
}

int main()
{
    bebes();
    validar();

}
