/*5 Uma loja precisa atualizar a quantidade de produtos disponíveis em
estoque. Sempre que ocorre uma venda, o sistema deve diminuir a
quantidade vendida do total em estoque*/

#include <stdio.h>

int main()
{
    int estoque, venda;

    // 1. Recebendo as informações iniciais
    printf("Informe a quantidade total de produtos no estoque: ");
    scanf("%d", &estoque);

    printf("Informe a quantidade de produtos vendidos: ");
    scanf("%d", &venda);

    // 2. Verificando se a venda é possível (não podemos ter estoque negativo)
    if (venda <= estoque)
    {
        // 3. Atualizando o estoque (estoque = estoque - venda)
        estoque -= venda;

        printf("\n--- VENDA APROVADA ---\n");
        printf("Quantidade atualizada no estoque: %d unidades.\n\n", estoque);
    }
    else
    {
        // Caso o cliente tente comprar mais do que a loja tem
        printf("\n--- ERRO NA VENDA ---\n");
        printf("Estoque insuficiente! Voce tem apenas %d unidades disponiveis.\n\n", estoque);
    }

    return 0;
}