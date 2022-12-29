#include <stdio.h>
#include <stdlib.h>


int main()
{
    float numero, maior, menor;
    int x;
    for (x = 1; x <= 15 ; x++)
    {
        printf("qual seu %d numero?\n", x);
        scanf("%f", &numero);

        if (x == 1)
        {
            maior = numero;
            menor = numero;
        }

        if (numero > maior){
            maior = numero;
        }

        if (numero < menor){
            menor = numero;
        }
    }
    printf("\no maior numero e %.3f", maior);
    printf("\no menor numero e %.3f", menor);

    return 0;
}
