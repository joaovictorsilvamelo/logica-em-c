#include <stdio.h>

int main()
{
    float prato, bebida, sobremesa, valorTotal;
    int pagamento;

    // 1. Recebendo os valores separadamente
    printf("Informe o valor do Prato Principal (ou 0 se nao pediu): R$ ");
    scanf("%f", &prato);

    printf("Informe o valor da Bebida (ou 0 se nao pediu): R$ ");
    scanf("%f", &bebida);

    printf("Informe o valor da Sobremesa (ou 0 se nao pediu): R$ ");
    scanf("%f", &sobremesa);

    // 2. Calculando o valor bruto
    valorTotal = prato + bebida + sobremesa;

    // 3. Verificando o primeiro desconto (Consumiu os três itens?)
    if (prato > 0 && bebida > 0 && sobremesa > 0)
    {
        valorTotal = valorTotal * 0.92; // Aplica 8% de desconto
        printf("\n=> Desconto de 8%% aplicado por consumir o combo completo!");
    }

    // 4. Recebendo a forma de pagamento
    printf("\n\nQual a forma de pagamento?\n1 - Dinheiro\n2 - Cartao/Pix\nSua escolha: ");
    scanf("%d", &pagamento);

    // 5. Verificando o segundo desconto (Dinheiro?)
    if (pagamento == 1)
    {
        valorTotal = valorTotal * 0.95; // Aplica mais 5% de desconto sobre o valor atual
        printf("=> Desconto extra de 5%% aplicado pelo pagamento em dinheiro!\n");
    }

    // 6. Exibindo o resultado final
    printf("\nO valor final da conta ficou: R$%.2f\n\n", valorTotal);

    return 0;
}