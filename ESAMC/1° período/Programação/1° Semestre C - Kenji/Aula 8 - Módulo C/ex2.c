#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha, coluna, valor, qtLinhas;

    printf("Insira a quantidade de linhas que deseja: ");
    scanf("%d", &qtLinhas);

    valor = 1;
    for (linha = 1; linha <= qtLinhas; linha++)
    {
        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("%d ", valor);
            valor++;
        }
        printf("\n");
    }

    return 0;
}