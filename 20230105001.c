#include <stdio.h>
#include <stdlib.h>

int x,y,maior,menor;

void scanIntIntervalo(){
    scanf("%d%d",&x,&y);
    while (x < 0 || x > 1000 || y < 0 || y > 1000 ){
        printf("Digite dois numeros validos(De 0 a 1000):");
        scanf("%d%d",&x,&y);
    }
    if (x > y){
        maior = x;
        menor = y;
    }
    else{
        maior = y;
        menor = x;
    }

}

int porcento (){
    int porcentrel;
    porcentrel = 100*menor/maior;
    return porcentrel;
}

int  absdif(){
    int  abssoma;
    abssoma = maior - menor;
    return abssoma;
}

void main(){
    scanIntIntervalo();
    porcento();
    printf("%d por cento", porcento());
    absdif();
    printf("\n módulo da diferença: %d",absdif());



}

