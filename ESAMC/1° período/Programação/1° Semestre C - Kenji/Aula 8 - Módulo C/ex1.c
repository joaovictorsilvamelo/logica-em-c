#include <stdio.h>
#include <math.h>

int main()
{
    int res = 5, palpite, acertou = 0;

    while (acertou == 0)
    {
        printf("Qual o seu palpite? ");
        scanf("%d", &palpite);

        if (palpite == res)
        {
            printf("Parabens, voce acertou!\n");
            acertou = 1;
        }
        else if (palpite < res)
        {
            printf("O numero e maior que o seu palpite.\n");
        }
        else
        {
            printf("O numero e menor que o seu palpite.\n");
        }
    }

    return 0;
}
