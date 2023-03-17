#include <stdio.h>
#include <stdlib.h>
int ordernar(int valor1,int valor2,int valor3){

    int *a = &valor1,*b = &valor2,*c =&valor3,*g;

    if(*a<*b && *a<*c){
        if(*c<*b){
            g = b;
            b = c;
            c = g;
        }
    }
    else if(*b<*a && *b<*c){
        g = a;
        a = b;
        if(*c<*g){
            b = c;
            c = g;

        }
        else{
            b = g;
        }
    }

    else if(*c<*a && *c<*a){
        g = a;
        a = c;
        if(*g>*b){
                c = g;

        }
        else{
            c = b;
            b = g;
        }
    }
    printf("ordem: %d, %d, %d",*a,*b,*c);



    }



int main()
{
    int vetor1[3];
    int *i;

    for(i = vetor1; i<&vetor1[3];i++){
        printf("Valor: \n");
        scanf("%d",i);
    }
     int iguais = ordernar(vetor1[0],vetor1[1],vetor1[2]);

     if(iguais == 1){
        printf("\nsao iguais");

     }
     else
        printf("\nnao sao iguais");

}
