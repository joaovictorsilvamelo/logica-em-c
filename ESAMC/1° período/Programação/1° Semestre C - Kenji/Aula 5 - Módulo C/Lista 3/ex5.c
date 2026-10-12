/*5. Dados três valores inseridos pelo usuário, mostre qual é o maior,
o menor e o valor do meio.*/

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    int maior, menor, meio;

    printf("Insira o valor 1: ");
    scanf("%d", &n1);
    printf("\nInsira o valor 2: ");
    scanf("%d", &n2);
    printf("\nInsira o valor 3: ");
    scanf("%d", &n3);

    maior = n1;
    menor = n1;

    if (n2 > maior)
    {
        maior = n2;
    }

    if (n2 < menor)
    {
        menor = n2;
    }

    if (n3 > maior)
    {
        maior = n3;
    }

    if (n3 < menor)
    {
        menor = n3;
    }

    meio = (n1 + n2 + n3) - maior - menor;

    printf("\nOS VALORES SAO:\nMAIOR: %d\nMEIO: %d\nMENOR: %d\n\n", maior, meio, menor);

    return 0;
}