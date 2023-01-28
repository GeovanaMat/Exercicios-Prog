#include <stdio.h>
#include <stdlib.h>

int main(){
   int matriz[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}},i,j,diagonalprin[10],diagonalsec[10],soma4 = 0,soma2 = 0;

    for(i =0; i < 5; i++){
        diagonalprin[i] = matriz[i][i];
    }
    for(i =0;i<5;i++){
        for(j = 0; j<5;j++){
            if(i + j == 4){
                diagonalsec[i] = matriz[i][j];
            }
        }
    }

  for(i = 0; i < 5;i++){
    j = 4;
    soma4 = matriz[j][i] + soma4;
  }

  for(i=0;i<5;i++){
    j= 2;
    soma2 = matriz[i][j] + soma2;
  }
  printf("Diagonal Principal: ");
   for(i=0;i<5;i++){

    printf("%d ", diagonalprin[i]);
   }
printf("\n");


   printf("Diagonal Secundaria: ");
   for(i=0;i<5;i++){

    printf("%d ", diagonalsec[i]);
   }

   printf("\n");
   printf("Soma linha 4: %d \n ", soma4);
   printf("Soma coluna 2: %d \n \n ", soma2);

   for(i=0;i<5;i++){
        printf("\n");
    for(j=0;j<5;j++){
        if(i == j)
            printf(" ");
        else{
            printf("%d ", matriz[i][j]);
        }
    }
   }

    }


