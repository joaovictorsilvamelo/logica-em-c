#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int i, j, flag, count = 0, tam = 5, vet[5], unic[5];

    for (i = 0; i < tam; i++)
    {
        printf("Insira o elemento %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < tam; i++)
    {
        flag = 0;

        for (j = 0; j < tam; j++)
        {
            if (vet[i] == vet[j])
            {
                flag++;
            }
        }

        if (flag == 1)
        {
            unic[count] = vet[i];
            count++;
        }
    }

    printf("\nOs digitos unicos sao: ");
    for (i = 0; i < count; i++)
    {
        printf(" %d", unic[i]);
    }

    return 0;
}