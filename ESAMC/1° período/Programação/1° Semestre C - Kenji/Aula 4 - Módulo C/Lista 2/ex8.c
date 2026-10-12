/*8. Leia o valor do raio de um círculo e calcule o diâmetro, o comprimento da
circunferência e a área do círculo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r, d, cc, h, pi = 3.14159265359;

    printf("Informe o valor do raio do circulo: ");
    scanf("%f", &r);

    d = 2 * r;
    cc = 2 * pi * r;
    h = pi * pow(r, 2);

    printf("Informando os valores para:\nDIAMETRO: %.2f\nCOMPRIMENTO DA CIRCUNFERENCIA: %.2f\nAREA DO CIRCULO: %.2f\n\n", d, cc, h);

    return 0;
}