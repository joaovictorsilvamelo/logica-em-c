#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int i, num, dig, count = 0, senha[4] = {1, 5, 6, 7};

    printf("Insira o codigo: ");
    scanf("%d", &num);

    for (i = 3; i >= 0; i--)
    {
        dig = num % 10;

        if (dig != senha[i])
        {
            count++;
        }

        num = num / 10;
    }

    printf("O codigo inserido possui %d digitos errados!", count);

    return 0;
}