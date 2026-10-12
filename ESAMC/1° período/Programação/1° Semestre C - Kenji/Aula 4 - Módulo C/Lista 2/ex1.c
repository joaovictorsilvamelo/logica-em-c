/*1. Leia o comprimento, a largura e a altura de uma caixa retangular e calcule
o volume total da caixa.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float v, c, l, h;

    printf("INSIRA OS VALORES EM CENTIMENTROS!!!!!\n");
    printf("Insira o comprimento: ");
    scanf("%f", &c);
    printf("Insira a largura: ");
    scanf("%f", &l);
    printf("Insira a altura: ");
    scanf("%f", &h);

    v = c * l * h;

    printf("\nO volume total da caixa eh: %.2f cm", v);

    return 0;
}