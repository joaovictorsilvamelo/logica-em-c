/*5. Leia o valor depositado em uma conta bancaria e calcule o saldo final
apos aplicar um rendimento de 5%.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo;

    printf("Insira o valor depositado na conta bancaria: ");
    scanf("%f", &saldo);
    printf("O valor com o rendimento final eh R$%.2f\n\n", saldo * 1.05);

    return 0;
}