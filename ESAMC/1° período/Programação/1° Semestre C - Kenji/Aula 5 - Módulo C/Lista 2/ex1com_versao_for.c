#include <stdio.h>

int main()
{
    double numero, maior;

    // 1. Lemos o PRIMEIRO número do lado de fora do laço
    printf("Informe o numero 1: ");
    scanf("%lf", &numero);

    // Assumimos que ele é o rei da colina
    maior = numero;

    // 2. O laço começa a partir do SEGUNDO número (i = 2)
    for (int i = 2; i <= 5; i++)
    {
        printf("Informe o numero %d: ", i);
        scanf("%lf", &numero); // Reciclamos a mesma variável 'numero' para economizar memória!

        // 3. A mágica da comparação: quem for maior, toma a coroa
        if (numero > maior)
        {
            maior = numero;
        }
    }

    printf("\nO maior numero informado eh %.2lf\n\n", maior);

    return 0;
}