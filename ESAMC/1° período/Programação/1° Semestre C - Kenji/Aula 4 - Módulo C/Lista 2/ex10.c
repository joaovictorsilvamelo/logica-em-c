/*10.Leia três números inteiros e calcule o valor da soma desses três números
multiplicada por dois.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, soma = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Insira o %d valor inteiro para o calculo: ", i + 1);
        scanf("%d", &n);
        soma += n;
        system("cls");
    }

    printf("O valor dos tres numeros somados e multiplicados por 2 eh: %d\n\n", soma * 2);

    return 0;
}