#include <stdio.h>

int main(){
	float num1,num2,num3,num4,media;
	printf("Digite 4 numeros:");
	scanf("%f%f%f%f",&num1,&num2,&num3,&num4);
	media = (num1 +  num2 + num3 + num4)/4;
	printf("Media das notas: %f",media);
}
