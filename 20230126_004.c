#include <stdio.h>
#include <stdlib.h>

int main(){
   int matriz[3][3],i,j,numero,posi,posj;

   for(i= 0; i < 3; i++){
    for( j= 0; j < 3; j++){
        printf("Numero na posição %d,%d: ", i,j);
        scanf("%d", &matriz[i][j]);}}

    printf("Valor a ser encontrado: ");
    scanf("%d",&numero);


    for(i = 0; i <3 ; i++){
        for( j=0; j <3 ;j++){
            if(matriz[i][j] == numero){
                posi = i;
                posj =j;}
        }
    }

    printf("O numero %d, esta na posicao (%d,%d)", numero,posi,posj);
    }


