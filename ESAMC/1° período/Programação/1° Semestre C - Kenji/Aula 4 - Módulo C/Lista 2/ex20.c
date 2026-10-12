/*20.Leia um número inteiro de três dígitos e determine o número formado pela
inversão da ordem de seus dígitos.*/

#include <stdio.h>

int main()
{
    int n, u, d, c;

    printf("Informe um numero inteiro de tres digitos: ");
    scanf("%d", &n);

    c = n / 100;
    d = (n / 10) % 10;
    u = n % 10;

    printf("\nO numero na ordem inversa eh %d%d%d\n\n", u, d, c);

    return 0;
}