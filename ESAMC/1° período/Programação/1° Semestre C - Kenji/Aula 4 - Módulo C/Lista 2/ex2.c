/*2. Leia dois numeros inteiros e calcule a soma, a diferenca, o produto e o
quociente entre esses dois numeros.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, s, d, p, q;
    printf("Calculo das 4 operacoes basicas!!!!!\n\n");
    printf("Insira o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Insira o segundo numero inteiro: \n");
    scanf("%d", &n2);

    s = n1 + n2;
    d = n1 - n2;
    p = n1 * n2;
    q = n1 / n2;

    printf("OPERACOES DOS NUMEROS:\nSOMA: %d\nDIFERENCA: %d\nPRODUTO: %d\nQUOCIENTE: %d", s, d, p, q);

    return 0;
}