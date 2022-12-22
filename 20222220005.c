#include <stdio.h>
int main(){
    int contador,numero;
    int maior = 0;
    int menor = 1000;
    
    
    
  for(contador = 0; contador < 3; contador++)
  {
      
    scanf("%d",&numero);
    if(numero >= 0){
    if (numero > maior){
        maior = numero;
    }
    if (numero < menor){
        menor = numero;
    }
    }
    else{
    printf("Coloque numero positivo");
        }
}
    
printf("Maior numero: %d e menor numero: %d",maior,menor);
}
