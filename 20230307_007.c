#include <stdio.h>
#include <stdlib.h>
int maxmin(int *pvet,int *pvetfim, int *maior, int *menor){
    int *i;
    for(i = pvet; i < pvetfim; i++){

        if(i == pvet){
            maior = pvet;
            menor = pvet;
        }
        else{
            if(*i > *maior){
                maior = i;
            }
            if(*i < *menor){
                menor = i;
            }
        }



}
    printf("maior: %d, menor: %d", &maior, &menor);


}

int main(){
    int maximo,minimo;
    int vetor1[5] = {4,2,3,4,5};
    int tam = sizeof(vetor1)/sizeof(vetor1[0]);
    maxmin(&vetor1,&vetor1[tam],&maximo,&minimo);
    printf("maior: %d, menor: %d\n", maximo, minimo);

}


