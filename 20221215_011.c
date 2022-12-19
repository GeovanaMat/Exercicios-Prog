#include <stdio.h>

int main(){
	float horas, totalh,imposto,inss,sind,salariototal,salarioliq;
	printf("Quanto vc ganha por hora?Quantas horas ja tabalhou?");
	scanf("%f%f",&horas,&totalh);
	salariototal = horas*totalh;
	imposto = 0.11*salariototal;
	inss = 0.08*salariototal;
	sind = 0.05*salariototal;
	salarioliq = salariototal - imposto - inss - sind;
	printf(" Seu salario bruto: %1.2f\n",salariototal);
	printf("Quanto pagou de inss:%1.2f\n",inss);
    printf("Quanto pagou de sindicato:%1.2f\n",sind);
    printf("Salario liquido:%1.2f",salarioliq);
return 0;

}
