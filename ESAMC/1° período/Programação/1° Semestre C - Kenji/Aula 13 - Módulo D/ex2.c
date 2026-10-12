#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check(int valor)
{
    if (valor > 0)
    {
        return 1;
    }
    else if (valor == 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int main(int argc, char *argv[])
{
    int num, resultado;

    printf("Insira o valor de um numero: ");
    scanf("%d", &num);

    resultado = check(num);

    printf("O resultado da funcao e: %d", resultado);
    return 0;
}