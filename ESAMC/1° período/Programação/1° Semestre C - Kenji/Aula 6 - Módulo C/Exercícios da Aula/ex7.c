#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Insira o maior valor: ");
    scanf("%d", &num1);

    printf("Insira o menor valor: ");
    scanf("%d", &num2);

    // O segurança de balada prendendo o usuário teimoso
    while (num2 >= num1)
    {
        printf("ERRO! O valor precisa ser menor que o teto (%d). Digite de novo: ", num1);
        scanf("%d", &num2);
    }

    do
    {
        printf(" %d", num1);
        num1 = num1 - 1;
    } while (num1 >= num2);

    return 0;
}
