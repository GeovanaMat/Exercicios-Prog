#include <stdio.h>
#include <stdlib.h>



int main()
{
 int vet[100],num,i,numeroi;
 printf("Digite a quantidade de numero: ");
 scanf("%d",&num);
  for(i = 1; i <= num ; i++){
      printf("Numero na posicao %d : ",i);
    scanf("%d", &numeroi);
    vet[i] = numeroi;

  }
  for (i = num; i >=1; i--){
    printf("%d ",vet[i]);
  }

}
