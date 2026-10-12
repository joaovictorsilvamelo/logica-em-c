#include <stdio.h>

int main()
{
    int num;

    printf("Insira um valor para a tabuada: ");
    scanf("%d", &num);

    printf("\n--- Tabuada do %d ---\n", num);

    // O relógio vai de 1 até 10 exatos
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}