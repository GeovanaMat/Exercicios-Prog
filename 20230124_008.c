#include <stdio.h>
#include <stdlib.h>

int main(){

   int vet[100],vet2[100],i,total,produtovet=0;

   printf("Tamanho das matrizes: ");
   scanf("%d",&total);

   for( i = 1; i <= total; i++){

    printf("Matriz X -  Posicao %d: ",i);
    scanf("%d",&vet[i]);
   }
 for( i = 1; i <= total; i++){

    printf("Matriz Y -  Posicao %d: ",i);
    scanf("%d",&vet2[i]);
}

for(i  = 1; i<= total; i++){
    produtovet = vet[i]*vet2[i] + produtovet;
}

printf("Produto Vetorial: %d ", produtovet);
}
