#include <stdio.h>

int main(){
	int num1,num2,num3,soma,soma2,soma3;
	printf("De 2 numeros inteiros e um numero real:");
	scanf("%d%d%d",&num1,&num2,&num3);
	soma = (num1*2)*(num2/2);
	soma2 = (num1*3) + num3;
	soma3 = num3*num3*num3;

	printf(" o produto do dobro do primeiro com metade do segundo: %d",soma);
	printf(" a soma do triplo do primeiro com o terceiro: %d",soma2);
	printf(" o cubo do terceiro: %d",soma3);
}
