#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Insira o maior valor: ");
    scanf("%d", &num1);

    printf("Insira o menor valor: ");
    scanf("%d", &num2);

    while (num1 >= num2)
    {
        printf(" %d", num1);
        num1 = num1 - 1;
    }

    return 0;
}