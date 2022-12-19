#include <stdio.h>

int main(){
	int f,c;
	printf("Temperatura em Celsius:");
	scanf("%d",&c);
	f = (c*9/5) + 32;
	printf("Temperatura em Fahrenheit: %d",f);
}
