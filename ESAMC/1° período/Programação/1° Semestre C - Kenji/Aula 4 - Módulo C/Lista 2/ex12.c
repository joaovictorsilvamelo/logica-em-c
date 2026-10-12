/*12.Leia a base e a altura de um triângulo e calcule sua área.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, b, a;
    printf("Informe a base do triangulo: ");
    scanf("%f", &b);
    printf("Informe a altura do triangulo: ");
    scanf("%f", &h);

    a = (b * h) / 2;
    printf("A area do triangulo eh: %.3f\n\n", a);

    return 0;
}