#include <stdio.h>
#include <stdlib.h>
int vetor1[] = {1,2,3,4},vetor2[] = {1,2,3,4,6,8};

int somavetor(int *a, int *b){

    int lenA = sizeof(vetor1)/sizeof(vetor1[0]);
    int lenB = sizeof(vetor2)/sizeof(vetor2[0]);
    int vetor3[lenA];
    if(lenA == lenB){
        int *i,*j,cont= 0;
        for(i = a,j = b; i<&a[lenA];i++,j++){
            int soma = 0;
            soma = *i + *j;
            *(vetor3+cont) = soma;
            printf("%d\n",*(vetor3+cont));
            cont++;

        }
        return 1;
    }
    else
        return 0;
}




int main(){
     int ok = somavetor(vetor1,vetor2);
     if(ok == 1){
        printf("Certo");
     }
     else
        printf("Deu errado");

}


