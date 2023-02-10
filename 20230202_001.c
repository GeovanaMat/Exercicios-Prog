#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){
    char equipe[5][4][120],nomebusca[100];
    int i,j,pos;

    for(i=0;i<=4;i++){
        for(j=0;j<=3;j++){
            printf("Pessoas da equipe %d: ",i+1);
            scanf("%s",equipe[i][j]);


        }
    }
 printf("Escreva um nome para a busca: ");
 scanf("%s",nomebusca);

 for(i=0;i<=4;i++){
    for(j=0;j<=3;j++){
        if(strcmp(nomebusca,equipe[i][j])== 0){
            printf("Equipe: %d",i+1);
        }
    }
 }


}












