#include <stdio.h>

int main()
{
    int n, c, d, u, invertido;

    printf("Informe um numero inteiro de tres digitos: ");
    scanf("%d", &n);

    // Fatiando o número (Ex: 123)
    c = n / 100;       // Centena: 1
    d = (n / 10) % 10; // Dezena:  2
    u = n % 10;        // Unidade: 3

    // A MÁGICA MATEMÁTICA ACONTECE AQUI:
    // (3 * 100) + (2 * 10) + 1 = 300 + 20 + 1 = 321
    invertido = (u * 100) + (d * 10) + c;

    printf("\nO numero matematicamente invertido eh: %d\n\n", invertido);

    return 0;
}