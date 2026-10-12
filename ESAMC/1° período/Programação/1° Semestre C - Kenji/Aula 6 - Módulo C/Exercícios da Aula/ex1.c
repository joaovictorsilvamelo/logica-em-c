#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, soma = 0;
    int i = 1;

    while (i <= 10)
    {
        printf("Insira o numero %d: ", i);
        scanf("%f", &num);
        soma = soma + num;

        i = i + 1;
    }

    printf("O resultado e: %f", soma);

    return 0;
}