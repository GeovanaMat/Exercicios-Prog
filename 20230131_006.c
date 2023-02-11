#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[100],palavrainverso[100],palavrasem[100];
    int i,j,contador=0,contador2= 0;

    printf("Escreva uma palavra: ");
    scanf("%100[^\n]s",&palavra);

    for(i=strlen(palavra);i>=0;i--){
            if((palavra[i] >= 97 && palavra[i] <= 122) || (palavra[i] >= 65 && palavra[i] <= 90) ){
                    if(palavra[i] >= 65 && palavra[i] <= 90){
                    palavra[i] = palavra[i] +32;
                }
            palavrainverso[contador2] = palavra[i];
            contador2++;}
    }

    for(i=0;i<=strlen(palavra);i++){
         if((palavra[i] >= 97 && palavra[i] <= 122) || (palavra[i] >= 65 && palavra[i] <= 90)){
                if(palavra[i] >= 65 && palavra[i] <= 90){
                    palavra[i] = palavra[i] +32;
                }
            palavrasem[contador] = palavra[i];
            contador++;
         }
    }

printf("%s\n",palavra);
printf("%s\n",palavrainverso);
printf("%s\n",palavrasem);


if(strcmp(palavrainverso,palavrasem)==0){
    printf("Sao Palindromos");
}
else{
    printf("Nao sao palindromos");
}
}

