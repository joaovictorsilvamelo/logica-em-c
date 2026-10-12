#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, i;

    printf("Insira o maior valor: ");
    scanf("%d", &num1);

    printf("Insira o menor valor: ");
    scanf("%d", &num2);

    for (i = num1; i >= num2; i = i - 1)
    {
        printf(" %d", i);
    }

    return 0;
}
