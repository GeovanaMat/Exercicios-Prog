#include <stdio.h>
#include <stdlib.h>
int fatorial(){
    int num,vet[100],i,k,x,fat = 1;
    printf("Quantos numeros? ");
    scanf("%d",&num);


    for (i = 1;i<= num;i++){

        printf("Numero na posicao %d: ", i);
        scanf("%d",&vet[i]);
    if(vet[i] < 0){
        while(vet[i] < 0){
                printf("Digite um numero positivo: ");
                scanf("%d",&vet[i]);
    }}}

    for(k = 1; k <= num; k++){
        for(x = vet[k]; x >= 1 ;x--){
            fat = fat*x;

        }
        vet[k] = fat;
        fat = 1;
    }
    for(i = 1; i<= num; i++){
        printf("%d ", vet[i]);
    }

}


int main()
{
    fatorial();
}
