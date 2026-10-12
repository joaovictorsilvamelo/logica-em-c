/*7 Um restaurante cobra R$ 59,90 por quilo de comida. O cliente coloca o prato
na balança e o sistema calcula o valor a pagar. Caso o cliente seja idoso
(acima de 65 anos), ele recebe 10% de desconto.
*/

#include <stdio.h>

// Definindo o valor do quilo como constante
#define PRECO_KG 59.90

int main()
{
    int idade;
    float peso, valorTotal; // Nomes claros e específicos

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe o peso do prato em kgs: ");
    scanf("%f", &peso);

    // Variável específica para guardar dinheiro recebe o (peso * constante)
    valorTotal = peso * PRECO_KG;

    if (idade > 65)
    {
        printf("O valor a pagar eh R$%.2f\n\n", valorTotal * 0.90);
    }
    else
    {
        printf("O valor a pagar eh R$%.2f\n\n", valorTotal);
    }

    return 0;
}