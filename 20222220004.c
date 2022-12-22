#include <stdio.h>
int main(){
    int contador,numero,menor;
    int maior = 0;
    
  for(contador = 0; contador < 3; contador++)
  {
      
    scanf("%d",&numero);
    if (numero > maior){
        maior = numero;
    }
    if (numero < menor){
        menor = numero;
    }
}
printf("Maior numero: %d e menor numero: %d",maior,menor);
}
