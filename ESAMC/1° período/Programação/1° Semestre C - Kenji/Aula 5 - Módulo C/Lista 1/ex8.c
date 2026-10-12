/*8 Um estacionamento cobra:
• R$ 8,00 pela primeira hora
• R$ 5,00 por cada hora adicional
Caso o cliente permaneça mais de 5 horas, ele recebe 10% de desconto
sobre o valor total.*/

#include <stdio.h>

int main()
{
    int horas;
    float valor; // Criamos um float porque o dinheiro vai ter centavos

    printf("Informe as horas que voce ficou no estacionamento: ");
    scanf("%d", &horas); // <-- O "&" comercial adicionado aqui!

    // Primeiro resolvemos o cálculo do valor bruto
    if (horas == 1)
    {
        valor = 8.00;
    }
    else if (horas > 1)
    {
        // R$ 8 da primeira hora + R$ 5 para CADA hora extra (horas - 1)
        valor = 8.00 + ((horas - 1) * 5.00);
    }

    // Agora validamos se ele tem direito ao desconto
    if (horas > 5)
    {
        valor = valor * 0.90;             // Aplica o desconto de 10%
        printf("Com desconto de 10%%, "); // Dica: para imprimir o símbolo %, digite %%
    }

    // Imprimimos o resultado com %.2f para ficar com cara de dinheiro real
    printf("O valor a ser pago eh R$%.2f\n\n", valor);

    return 0;
}