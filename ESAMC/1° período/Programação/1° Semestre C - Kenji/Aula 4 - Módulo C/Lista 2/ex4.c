/*4. Leia o valor de uma compra e calcule o valor final após a aplicação de um
imposto de 8% sobre o preço original.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;

    printf("Insira o valor da compra: ");
    scanf("%f", &valor);

    printf("O valor final apos os impostos eh R$%.2f\n\n", valor * 1.08);

    return 0;
}