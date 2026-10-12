/*9 Uma empresa de transporte calcula o valor do frete com base no peso da
encomenda e na distância percorrida.
• O custo é R$ 0,50 por kg
• O custo é R$ 0,20 por km
Caso o peso ultrapasse 50 kg, é cobrada uma taxa adicional de R$ 25,00.*/

#include <stdio.h>

int main()
{
    float kg, km, valor;

    printf("Informe o valor do peso da carga em kg: ");
    scanf("%f", &kg);

    printf("Informe o valor da distancia em km: ");
    scanf("%f", &km);

    // ERRO CORRIGIDO: Asterisco adicionado na multiplicação do km
    valor = (kg * 0.50) + (km * 0.20);

    // Validação da taxa extra
    if (kg > 50)
    {
        valor += 25.00; // Atualizamos o valor de verdade na memória

        printf("\n--- ATENCAO ---\n");
        printf("Como o peso da carga eh maior que 50 kgs, foi cobrada uma taxa adicional de R$25.00.\n\n");
    }

    // Agora imprimimos o resultado (ele vai ter a taxa ou não, dependendo se entrou no 'if')
    printf("O valor final do frete ficou: R$%.2f\n\n", valor);

    return 0;
}