#include <stdio.h>
#include <stdlib.h>

int main(){
   int matriz[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}},i,j,somalinha=0,somacoluna=0,somaprin=0,somasec=0;

    for(i =0; i < 5; i++){
        somaprin = somaprin + matriz[i][i];
    }
    for(i =0;i<5;i++){
        for(j = 0; j<5;j++){
            if(i + j == 4){
                somasec = somasec + matriz[i][j];
            }}}

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            somalinha = somalinha + matriz[i][j];
        }
    }

     for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            somacoluna = somacoluna + matriz[j][i];
        }}


if(somacoluna == somalinha || somaprin == somasec){
    printf("é um quadrado mágico");
}
else{
    printf(" nao é um quadrado mágico");
}



    }


