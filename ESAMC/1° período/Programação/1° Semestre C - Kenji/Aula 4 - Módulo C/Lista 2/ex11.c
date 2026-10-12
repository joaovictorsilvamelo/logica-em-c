/*11.Leia o preço de três produtos diferentes e calcule o valor total da compra.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p, soma = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Insira o valor do produto %d: ", i + 1);
        scanf("%f", &p);
        soma += p;
    }

    printf("O valor total da compra foi R$%.2f\n\n", soma);

    return 0;
}