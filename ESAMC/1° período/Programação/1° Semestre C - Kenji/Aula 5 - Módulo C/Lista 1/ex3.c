/*3 Um aplicativo deseja converter temperaturas fornecidas em graus Celsius
para Fahrenheit*/

#include <stdio.h>

int main()
{
    float cel, fah;

    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &cel);

    fah = cel * 1.8 + 32;

    printf("A temperatura em Fahrenheit eh: %.2f\n\n", fah);

    return 0;
}