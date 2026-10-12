/*16.Leia a largura e a altura de uma tela retangular e calcule a área total dessa
tela.*/

#include <stdio.h>

int main()
{
    float l, h, a;

    printf("Informe a largura da tela: ");
    scanf("%f", &l);
    printf("Informe a altura da tela: ");
    scanf("%f", &h);

    a = h * l;

    printf("\nA area total dessa tela eh %.2fm2\n\n", a);

    return 0;
}