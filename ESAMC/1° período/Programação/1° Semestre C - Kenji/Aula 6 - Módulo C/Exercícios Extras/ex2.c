#include <stdio.h>

int main()
{
    int num, divisores = 0;

    printf("Insira um valor para verificar se e primo: ");
    scanf("%d", &num);

    // Testa todos os números de 1 até o próprio número digitado
    for (int i = 1; i <= num; i++)
    {
        // Se o resto for zero, significa que a divisão deu certo
        if (num % i == 0)
        {
            divisores++; // Conta +1 divisor
        }
    }

    // A regra de ouro do número primo
    if (divisores == 2)
    {
        printf("\nO numero %d e PRIMO!\n", num);
    }
    else
    {
        printf("\nO numero %d NAO e primo.\n", num);
    }

    return 0;
}