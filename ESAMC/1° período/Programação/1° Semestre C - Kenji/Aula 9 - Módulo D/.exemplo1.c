/*Receber 5 números inteiros e imprimir em ordem inversa.*/

#include <stdio.h>

int main()
{
    int n[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d numero inteiro: ", i + 1);
        scanf("%d", &n[i]);
    }

    printf("Representando os numeros na ordem inversa:\n");

    for (int i = 4; i >= 0; i--)
    {
        printf("%d\n", n[i]);
    }

    return 0;
}