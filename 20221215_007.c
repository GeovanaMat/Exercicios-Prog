#include <stdio.h>

int main(){
	int f,c;
	printf("Temperatura em Farenheit:");
	scanf("%d",&f);
	c = (5 * (f-32)) / 9;
	printf("Temperatura em Celsius: %d",c);
}
