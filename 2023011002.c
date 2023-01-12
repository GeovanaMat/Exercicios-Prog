#include <stdio.h>


int quantidadeCasas(int n){
	int j=1, i=0;
	for(j=1;j<=n;j*=10){
		i++;
	}
	return i;
}
int pegaNum(int num){
	int controle,cont, casas, k, codigo = 0, multi=1, resto, sub, soma=0, peganum, original;
	    original = num;
		casas = quantidadeCasas(num);
		controle = casas;
		for(cont=controle;cont>=1;cont--){
			for(k=1;k<casas;k++){
		    multi = multi * 10;
	        }
		    resto = num%multi;
		    sub = num - resto;
		    peganum = sub/multi;
		    switch (peganum){
				    case 1:
            codigo += 1;
          case 2:
            codigo += 10;
          case 3:
            codigo += 100;
           case 4:
            codigo += 1000;
           case 5:
            codigo += 10000;
           case 6:
            codigo += 100000;
           case 7:
            codigo += 1000000;
           case 8:
            codigo += 10000000;
           case 9:
            codigo += 100000000;
           case 0:
            codigo += 1000000000;
	       }
	        num = resto;
	        multi = 1;
	        casas = quantidadeCasas(num);
		}	
return codigo;
		}

int main(){
	int numero1, numero2;
	printf("digite um numero 1 = ");
	scanf("%d", &numero1);
	printf("digite o numero 2 = ");
	scanf("%d", &numero2);
	if(pegaNum(numero1) == pegaNum(numero2)){
    printf("o número %d eh uma permutação de %d",numero1,numero2);
}
else{
printf("O número %d nao eh uma permutação de %d",numero1,numero2);
}


	
	return 0;
} 