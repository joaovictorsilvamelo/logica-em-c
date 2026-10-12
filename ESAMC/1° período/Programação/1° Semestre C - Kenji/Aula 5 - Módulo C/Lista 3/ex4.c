/*4. Dado um ponto (x, y) do plano cartesiano informado pelo usuário:
a. Identifique o quadrante
b. Se está sobre algum eixo
c. Se está na origem*/

#include <stdio.h>

int main()
{
    int x, y;

    printf("Informe um ponto x no plano cartesiano: ");
    scanf("%d", &x);
    printf("Informe um ponto y no plano cartesiano: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
    {
        printf("\nEsta no primeiro quadrante do plano cartesiano!\n\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("\nEsta no segundo quadrante do plano cartesiano!\n\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("\nEsta no terceiro quadrante do plano cartesiano!\n\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("\nEsta no quarto quadrante do plano cartesiano!\n\n");
    }
    else if (y == 0)
    {
        printf("\nEsta diretamente localizado sob o eixo X.\n\n");
    }
    else if (x == 0)
    {
        printf("\nEsta diretamente localizado sob o eixo Y.\n\n");
    }
    else if (x == 0 && y == 0)
    {
        printf("\nO ponto esta diretamente localizado sob a origem.\n\n");
    }

    return 0;
}