#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,cubo;
    printf(Escreva o número do cubo:");
    scanf("%d", &num);

    cubo = num*num*num;

    printf("\nCubo de %d = %d\n", num, cubo);

    return 0;
}
