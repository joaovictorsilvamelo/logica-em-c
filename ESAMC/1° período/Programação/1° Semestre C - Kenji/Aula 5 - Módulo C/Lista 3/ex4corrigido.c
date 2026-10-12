#include <stdio.h>

int main()
{
    int x, y;

    printf("Informe a coordenada X no plano cartesiano: ");
    scanf("%d", &x);
    printf("Informe a coordenada Y no plano cartesiano: ");
    scanf("%d", &y);

    // 1º: A condição mais específica (Origem)
    if (x == 0 && y == 0)
    {
        printf("\nO ponto esta diretamente localizado na ORIGEM (0,0).\n\n");
    }
    // 2º: Condições de Eixo (um deles é zero, mas o outro não)
    else if (x == 0)
    {
        printf("\nO ponto esta localizado sobre o eixo Y.\n\n");
    }
    else if (y == 0)
    {
        printf("\nO ponto esta localizado sobre o eixo X.\n\n");
    }
    // 3º: Condições de Quadrante (nenhum deles é zero)
    else if (x > 0 && y > 0)
    {
        printf("\nEsta no PRIMEIRO quadrante do plano cartesiano!\n\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("\nEsta no SEGUNDO quadrante do plano cartesiano!\n\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("\nEsta no TERCEIRO quadrante do plano cartesiano!\n\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("\nEsta no QUARTO quadrante do plano cartesiano!\n\n");
    }

    return 0;
}