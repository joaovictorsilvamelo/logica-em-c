#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, qtTermos, expoente;
    float soma, x;

    printf("Insira o valor de x: ");
    scanf("%f", &x);

    printf("Insira a quantidade de termos da serie: ");
    scanf("%d", &qtTermos);

    expoente = 1;
    soma = 0;
    for (i = 1; i <= qtTermos; i += 1)
    {
        soma += pow(-1, i + 1) * pow(x, expoente);
        expoente = expoente + 2;
    }

    printf("O resultado final sera igual a: %f", soma);
    return 0;
}