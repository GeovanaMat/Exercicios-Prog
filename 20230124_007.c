#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total,i,y,vet[100],face1=0,face2=0,face3=0,face4=0,face5=0,face6=0;
    printf("Total de Lançamentos: ");
    scanf("%d",&total);
    for (i = 1; i<= total;i++){

        printf("Resultado %d",i);
        scanf("%d",&vet[i]);

    }

    for (y = 1; y <= total; y++){

       if (vet[y] == 1)
        face1 += 1;
       if (vet[y] == 2)
        face2 += 1;
        if (vet[y] == 3)
        face3 += 1;
        if (vet[y] == 4)
        face4 += 1;
        if (vet[y] == 5)
        face5 += 1;
        if (vet[y] == 6)
        face6 += 1;

    }
    printf("Face 1 ocorreu %d vezes \n", face1);
    printf("Face 2 ocorreu %d vezes \n", face2);
    printf("Face 3 ocorreu %d vezes \n", face3);
    printf("Face 4 ocorreu %d vezes \n", face4);
    printf("Face 5 ocorreu %d vezes \n", face5);
    printf("Face 6 ocorreu %d vezes \n", face6);

}
