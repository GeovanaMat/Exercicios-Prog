#include <stdio.h>
#include <stdlib.h>

int main(){
   int matriz[3][5]= {{1,1,4,6,5},{2,7,2,2,2},{3,9,6,3,5}},i,j,soma;
   int matriz2[3][5] = {{1,1,6,1,1},{2,2,2,2,2},{3,0,34,7,3}};
   int matriz3[3][5];

   for(i= 0; i < 3; i++){
    for( j= 0; j < 5; j++){
        soma = matriz[i][j] + matriz2[i][j];
        matriz3[i][j] = soma;

    }
   }

   for(i= 0; i < 3; i++){
        printf("\n");
    for( j= 0; j < 5; j++){
        printf("%d ", matriz3[i][j]);
    }
   }


    }


