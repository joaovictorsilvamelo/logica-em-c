#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, vet[6], flag = 0;
    int tam = 5;

    for (i = 0; i <= tam; i++)
    {
        printf("Insira o elemento %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i <= tam; i++)
    {
        if (vet[i] != vet[tam - i])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("Nao e um palindromo!");
    }
    else
    {
        printf("E um palindromo");
    }

    return 0;
}