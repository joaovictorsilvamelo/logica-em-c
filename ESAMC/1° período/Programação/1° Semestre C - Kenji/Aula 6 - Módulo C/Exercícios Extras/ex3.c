#include <stdio.h>

int main()
{
    int num;
    int fatorial = 1; // ATENÇÃO: Acumulador de multiplicação SEMPRE começa em 1. Se começar em 0, zera a conta toda!

    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &num);

    // O Leão de Chácara (Validando a regra do enunciado)
    while (num < 0)
    {
        printf("ERRO! Nao existe fatorial de numero negativo.\n");
        printf("Digite um valor valido: ");
        scanf("%d", &num);
    }

    // A contagem regressiva para a matemática
    for (int i = num; i >= 1; i--)
    {
        fatorial = fatorial * i;
    }

    printf("\nO fatorial calculado e: %d\n", fatorial);

    return 0;
}