#include <stdio.h>
#include <stdlib.h>


int main()
{
    int tam = 10, vet[10], par[10], impar[10], count_par = 0, count_impar = 0, i;

    for (i = 0; i < tam; i++)
    {
        printf("Insira o elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < tam; i++)
    {
        if ((vet[i] % 2) == 0)
        {
            par[count_par] = vet[i];
            count_par++;
        }
        else
        {
            impar[count_impar] = vet[i];
            count_impar++;
        }
    }

    for (i = 0; i < count_par; i++)
    {
        printf(" %d", par[i]);
    }
    printf("\n");

    for (i = 0; i < count_impar; i++)
    {
        printf(" %d", impar[i]);
    }
    printf("\n");

    return 0;
}