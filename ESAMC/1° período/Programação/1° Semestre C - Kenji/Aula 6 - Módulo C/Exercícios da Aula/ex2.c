#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, soma = 0, i = 1;

    while (i <= 10)
    {
        printf("Insira o numero %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            soma = soma + num;
        }

        i = i + 1;
    }

    printf("O resultado e: %d", soma);

    return 0;
}
