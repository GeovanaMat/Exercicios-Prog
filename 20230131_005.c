#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char palavra[100],c,proximapala;
int i;

printf("Escreva a frase: ");
scanf("%100[^\n]",&palavra);


for(i=0;i< strlen(palavra);i++){
    if(palavra[i] >= 97 && palavra[i] <= 119 ){
    palavra[i] = palavra[i]-29;
    }
    if(palavra[i] >=120 && palavra[i] <=122){
        palavra[i] = palavra[i] - 55;
    }
printf("%c",palavra[i]);

}}











