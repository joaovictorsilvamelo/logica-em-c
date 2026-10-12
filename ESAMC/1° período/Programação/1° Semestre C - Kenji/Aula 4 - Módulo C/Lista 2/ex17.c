/*17.Leia o valor de um produto e calcule o novo preço após um aumento de
12%.*/

#include <stdio.h>

int main()
{
    float valorp;

    printf("Informe o valor do produto: ");
    scanf("%f", &valorp);

    printf("\nO novo preco apos o aumento de 12%% eh\n=>R$%.2f\n\n", valorp * 1.12);

    return 0;
}