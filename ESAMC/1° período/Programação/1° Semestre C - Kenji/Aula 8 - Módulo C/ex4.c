#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, qtTermos, soma, valor;

    printf("Insira a quantidade de termos desejados: ");
    scanf("%d", &qtTermos);

    soma = 0;
    valor = 1;
    for (i = 1; i <= qtTermos; i++)
    {
        soma += valor;
        valor = valor * 10 + 1;
    }

    printf("O resultado final e: %d", soma);
    return 0;
}