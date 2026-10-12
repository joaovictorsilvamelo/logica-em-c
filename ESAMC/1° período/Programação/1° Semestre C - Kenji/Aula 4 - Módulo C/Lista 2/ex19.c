/*19.Leia dois números inteiros A e B e calcule o valor de A², B² e a soma dos
quadrados desses dois números.*/

#include <stdio.h>
#include <math.h>

int main()
{
    double A, B;

    printf("Informe o numero inteiro A: ");
    scanf("%lf", &A);
    printf("Informe o numero inteiro B: ");
    scanf("%lf", &B);

    // Trocando todos os %lf por %.0lf
    printf("\nOs numeros %.0lf e %.0lf elevados ao quadrado resultam em: %.0lf e %.0lf, respectivamente.", A, B, pow(A, 2), pow(B, 2));
    printf("\nE a soma dos quadrados desses dois numeros resultam em: %.0lf\n\n", pow(A, 2) + pow(B, 2));

    return 0;
}