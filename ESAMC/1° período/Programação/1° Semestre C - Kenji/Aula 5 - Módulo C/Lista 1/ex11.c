/*11 Um restaurante cobra:
• Prato principal
• Bebida
• Sobremesa
Caso o cliente consuma os três itens, ele recebe 8% de desconto no valor
total. Caso o pagamento seja em dinheiro, recebe mais 5% de desconto.*/

#include <stdio.h>

int main()
{
    float prato, bebida, sobremesa, valor;
    int forma;

    printf("Informe o valor do prato (ou 0 se nao pediu): ");
    scanf("%f", &prato);
    printf("Informe o valor da bebida (ou 0 se nao pediu): ");
    scanf("%f", &bebida);
    printf("Informe o valor da sobremesa (ou 0 se nao pediu): ");
    scanf("%f", &sobremesa);

    valor = prato + bebida + sobremesa;

    if (prato > 0 && bebida > 0 && sobremesa > 0)
    {
        valor = valor * 0.92;
        printf("\n=> Desconto de 8%% aplicado por consumir o combo completo!");
    }

    printf("\n\nQual a forma de pagamento?\n1 - Dinheiro\n2 - Cartao/Pix\nSua escolha => ");
    scanf("%d", &forma);

    if (forma == 1)
    {
        valor = valor * 0.95;
        printf("\n=>Mais 5%% de desconto por pagar no dinheiro.");
    }

    printf("\n valor total a ser pago eh R$%.2f", valor);

    return 0;
}