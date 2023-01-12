#include <stdio.h>


int validar (int num1,int num2){
       int maior, menor;
 if (num1 > 0 && num2 > 0){
    if(num1 > num2){
    maior = num1;
    menor= num2;
    }
    else{
    maior = num2;
    menor = num1;
    }
    
    if ((maior - menor) % 1000 == 0){
        printf("Corresponde");
    }
    else{
        printf("Nao Corresponde");
    }
    }
}

int main(){
int num1,num2;
printf("Escreva dois números:");
scanf("%d%d",&num1,&num2);
 validar(num1,num2);

}