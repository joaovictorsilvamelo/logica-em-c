/*1. Escreva um programa que solicite três números ao usuário e informe qual
é o maior dentre eles sem utilizar comandos de repetição*/

#include <stdio.h>

int main()
{
    double n1, n2, n3;
    int i = 1;

    printf("Informe o numero %d: ", i);
    scanf("%lf", &n1);
    printf("Informe o numero %d: ", i + 1);
    scanf("%lf", &n2);
    printf("Informe o numero %d: ", i + 2);
    scanf("%lf", &n3);

    if (n1 >= n2 && n1 >= n3)
    {
        printf("\nO maior numero eh o primeiro valor informado, que eh %.2lf\n\n", n1);
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        printf("\nO maior numero eh o segundo valor informado, que eh %.2lf\n\n", n2);
    }
    else if (n3 >= n1 && n3 >= n2)
    {
        printf("\nO maior numero eh o terceiro valor informado, que eh %.2lf\n\n", n3);
    }

    printf("\nERRO NO CODIGO!\n\n");

    return 0;
}