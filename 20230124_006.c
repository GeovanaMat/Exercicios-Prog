#include <stdio.h>
#include <stdlib.h>

int main(){
    int total,i,j,x,vet[100],guardar,min,n =1;
    printf("Quantidades de numero: ");
    scanf("%d",&total);

    for (i = 1; i<= total; i++){

        printf("Numero na posicao %d: ", i);
        scanf("%d",&vet[i]);}
    for( i= 1; i<= total; i++){
        min = i;
        for( j = i+1; j<= total; j++){
            if(vet[j] < vet[min]){
                min = j;
            }
        }
        guardar = vet[min];
        vet[min] = vet[i];
        vet[i] = guardar;
    }
    for( x = 1; x<= total; x++){
        printf("%d",vet[x]);
    }

    }


