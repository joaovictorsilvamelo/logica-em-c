#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num, cara, coroa, i;
char lanc[50];

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    printf("Insira quantos lancamentos foram realizados: ");
    scanf("%d", &num);

    printf("\nInsira os resultados de cada lancamento (A = Cara, B = Coroa):\n");
    for (i = 0; i < num; i++)
    {
        printf("Insira o resultado do lancamento: %d: ", i + 1);
        fflush(stdin);
        scanf("%c", &lanc[i]);
    }

    cara = coroa = 0;
    for (i = 0; i < num; i++)
    {
        if (lanc[i] == 'A')
        {
            cara++;
        }
        else if (lanc[i] == 'B')
        {
            coroa++;
        }
    }

    printf("\nOcorreram %d caras e %d coroas.\n", cara, coroa);

    return 0;
}