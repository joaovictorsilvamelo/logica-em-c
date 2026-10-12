/*Receba 10 notas e calcule a média.*/

#include <stdio.h>

int main()
{
    float nota[10];
    float soma = 0, media;

    for (int i = 0; i < 10; i++)
    {
        printf("Informe a %d nota: ", i + 1);
        scanf("%f", &nota[i]);
        soma += nota[i];
    }

    media = soma / 10;

    printf("\nA media das notas informadas eh %.2f\n\n", media);

    return 0;
}