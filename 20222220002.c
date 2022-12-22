#include <stdio.h>
int main(){
    int contador,n1;
    int soma = 0;
    
  for(contador = 0; contador < 50; contador++)
  {
    scanf("%d",&n1);
    if (n1 % 2 != 0){
        soma = soma + n1;
    }
  }
  printf("SOma dos numeros: %d",soma);
}
