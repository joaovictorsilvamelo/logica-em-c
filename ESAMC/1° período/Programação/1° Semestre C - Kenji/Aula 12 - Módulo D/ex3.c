#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_LINHAS 3
#define MAX_COLUNAS 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int mat1[MAX_LINHAS][MAX_COLUNAS], mat2[MAX_LINHAS][MAX_COLUNAS], resultado[MAX_LINHAS][MAX_COLUNAS];
int i, j;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    for (i = 0; i <= MAX_LINHAS - 1; i++)
    {
        for (j = 0; j <= MAX_COLUNAS - 1; j++)
        {
            printf("Insira o nÃºmero [%d][%d] da primeira matriz: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    for (i = 0; i <= MAX_LINHAS - 1; i++)
    {
        for (j = 0; j <= MAX_COLUNAS - 1; j++)
        {
            printf("Insira o nÃºmero [%d][%d] da segunda matriz: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i <= MAX_LINHAS - 1; i++)
    {
        for (j = 0; j <= MAX_COLUNAS - 1; j++)
        {
            resultado[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("\nResultados da soma das matrizes: ");
    for (i = 0; i <= MAX_LINHAS - 1; i++)
    {
        printf("\n");
        for (j = 0; j <= MAX_COLUNAS - 1; j++)
        {
            printf("\t%d", resultado[i][j]);
        }
    }

    return 0;
}