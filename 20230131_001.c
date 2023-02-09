#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavra[]="Brasil",palavra2[5],maiusculo[] = "geovana",c;
int i,tamanho;

char vezes(char palavra3[],char parametro[]){
    int i,contador=0;
    for(i = 0;i <= sizeof(palavra3);i++){
        if(palavra3[i] == parametro){
            contador += 1;
        }
    }
    return contador;


}

void apagar(char palavra4[10]){
    int i;
    char letra[1],palavrasemLetra[20];
    scanf("%s",&letra);

    for(i=0;i < 10 ;i++){
            palavrasemLetra[i] = palavra4[i];
        if(palavrasemLetra[i] == letra[0]){
          palavrasemLetra[i] = 32;


    }



}
printf("%s",palavrasemLetra);
}




int main(){



    for(i=sizeof(palavra);i>=0;i--){
        printf("%c",palavra[i]);
    }
    printf("\n");
    scanf("%s",&palavra2);
    for(i=0;i<sizeof(palavra2);i++){
        if(palavra2[i] != 'a' && palavra2[i] != 'e' && palavra2[i]!= 'i'&& palavra2[i] != 'o' && palavra2[i] != 'u'){
            printf("%c",palavra2[i]);}
        }
        printf("\n");

    for(i=0;i<sizeof(maiusculo)-1;i++){
        c = maiusculo[i] - ('a' - 'A');
        printf("%c",c);
    }

    printf("\n");
    printf("%d",vezes(maiusculo,'a'));
    apagar("algoritm");
    }





