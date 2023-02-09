
#include <stdio.h>             /* diretiva */
#include <string.h>
#define LENGHT 100

main()                /* função principal */
{
    char carros[5][100];
    int i,contador=0,j,menor,valor[100];
    for(i=0;i<5;i++){
        scanf("%s",carros[i]);
    }
    for(i=0;i<5;i++){
        printf("valor de Km que ele percorre com um 1L\n");
        scanf("%d",&valor[i]);
    }

    for(i=0;i<5;i++){
            contador = 0;
        for(j=0;j<5;j++){
            if(valor[i] >= valor[j]){
                contador +=1;
                if(contador == 5){
                    menor = i;
                }
            }}


    }
     printf("O carro mais economico: %s \n",carros[menor]);

     for(i=0;i<5;i++){
        printf("O carro %s gasta %d litros de combustivel em 1000Km\n",carros[i],(1000/valor[i]));
     }

}

