/*1. Escreva um algoritmo em linguagem C que corresponda ao apresentado
no fluxograma a seguir:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, soma;

    printf("Insira o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("\nInsira o segundo numero inteiro: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("\nA soma eh: %d", soma);

    return 0;
}