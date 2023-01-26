#include <stdio.h>
#include <stdlib.h>

void mandaabraba(){
    int vet[100],num,i,numeroi;
 printf("Digite a quantidade de numero: ");
 scanf("%d",&num);

  for(i = 1; i <= num ; i++){
      printf("Numero na posicao %d : ",i);
    scanf("%d", &numeroi);
    vet[i] = numeroi;

  }

  for (i = 1; i <= num ; i++){
    if(vet[i] % 2 ==0)
    printf("%d ",vet[i]);

}
}

int main()
{
 mandaabraba();

}
