#include <stdio.h>

int main(){
	int num1,num2,total;
	printf("Quanto vc ganha por hora? e Quantas horar trbalhou por mes:");
	scanf("%d%d",&num1,&num2);
    total = num1*num2;
	printf("Voce ira receber esse mes: %d",total);
}
