#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int soma(int a, int b)
{
    return (a + b);
}

int main()
{
    int num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    resultado = soma(num1, num2);

    printf("O resultado e: %d", resultado);

    return 0;
}