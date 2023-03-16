#include <stdio.h>
#include <stdlib.h>
int main(){
 int vetor[8] = {1,3,4,5,6,7,8,9};
 int *i,*pvet = vetor;

 for(i = pvet;i<&pvet[8];i++){
    printf("\n %d e o dobro eh %d",*i,2*(*i));

 }
 for(i = pvet;i<&pvet[8];i++){
    if(*i%2==0){
        printf("\n endereco eh %d",i);
    }

 }


}


