#include <stdio.h>
// Removemos a <math.h> para deixar o programa mais leve!

int main()
{
    int A, B, quadA, quadB, somaQuad;

    printf("Informe o numero inteiro A: ");
    scanf("%d", &A);

    printf("Informe o numero inteiro B: ");
    scanf("%d", &B);

    // Fazemos os cálculos de forma nativa e guardamos em variáveis
    quadA = A * A;
    quadB = B * B;
    somaQuad = quadA + quadB;

    printf("\nOs numeros %d e %d elevados ao quadrado resultam em: %d e %d, respectivamente.", A, B, quadA, quadB);
    printf("\nE a soma dos quadrados desses dois numeros resulta em: %d\n\n", somaQuad);

    return 0;
}