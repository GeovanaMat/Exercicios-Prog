#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *repete(char *palavra, char *letra, int *tamanho){
    int i;
    int tam = strlen(palavra);
    int *p = (int *)malloc((tam)*sizeof(int));
    int contador = 0;
    for(i = 0; i < tam; i++){
        if(*(palavra+i) == *letra){
            p[contador] = i;
            contador++;
        }
    }
    *tamanho = contador;
    return p;




}

int main(){
    char palavra[10] = {"geovana"};
    char letra = 'a';
    int tamvetor2 = 0,i;
    repete(palavra,&letra,&tamvetor2);
    printf("Tamanho do vetor criado: %d \n",tamvetor2);
    for(i=0; i<tamvetor2; i++){
    printf("POsicao: %d ",*(repete(palavra,&letra,&tamvetor2)+i));}

}


