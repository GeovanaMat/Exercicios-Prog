#include <stdio.h>
#include <stdlib.h>


int par(){
    int num;
    printf("Escreva um numero:");
    scanf("%d",&num);
    while (num % 2 != 0){
        printf("Escreva uma numero par");
        scanf("%d",&num);
    }
    return num;
}

int validar(int numero1){
    int i,somadiv = 0;
    for(i = 1; i < numero1; ++i){
        if (numero1 % i == 0){
            somadiv = somadiv + i;
        }
    }
    if (somadiv == numero1){
        printf("%d eh um numero perfeito", numero1);
    }
    else{
        printf("%d nao eh um numero perfeito", numero1);
    }

}

int main(){
    int num;
    num = par();
    validar(num);



}
