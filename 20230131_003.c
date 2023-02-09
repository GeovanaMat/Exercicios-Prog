#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavra[]="Brasil",palavra2[5],maiusculo[] = "rena",c;
int i,tamanho;

char vezes(char palavra3[],char parametro){
    int i,contador=0;
    for(i = 0;i <= sizeof(palavra3);i++){
        if(palavra3[i] == parametro){
            contador += 1;
        }
    }
    return contador;


}

char apagar(char palavra4[],int parametro2){
    int i,a[5];
    char cara;
    for(i=0;i <= 6;i++){
        if(palavra4[i] == 97){
          palavra4[i] ="f";

    }

}
printf("%s",palavra4);
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
    apagar("amizade","a");
    }





