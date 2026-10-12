/*2. Escreva um algoritmo em linguagem C que solucione os seguintes
problemas:
a) Fornecido o valor de T, calcule o valor de W, sabendo que:
▪ W = 2T + 4Y – 3X
▪ X = 2T – 4
▪ Y = T/2 + 4
b) Dado dois valores, x e y, troque seus valores entre si e então exiba os
resultados.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float T, W, X, Y, temp;

    printf("Informe o valor de T: ");
    scanf("%f", &T);

    Y = T / 2 + 4;
    X = 2 * T - 4;
    W = 2 * T + 4 * Y - 3 * X;

    printf("Os valores para as variáveis sao:\nT = %.2f\nW = %.2f\nY = %.2f\nX = %.2f", T, W, Y, X);
    printf("\n\nExercicio B) Dado dois valores, x e y, troque seus valores entre si e então exiba os resultados.");

    temp = X;
    X = Y;
    Y = temp;

    printf("Os valores invertidos sao:\nX = %.2f\nY = %.2f", X, Y);

    return 0;
}