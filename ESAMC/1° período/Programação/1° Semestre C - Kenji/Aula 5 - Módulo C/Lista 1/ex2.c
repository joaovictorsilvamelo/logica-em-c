#include <stdio.h>

int main()
{
    float v, n, p;

    printf("Informe o valor da compra: ");
    scanf("%f", &n);
    printf("Informe o valor que voce pagou: ");
    scanf("%f", &p);

    v = n - p; // Positivo = falta pagar | Negativo = tem troco | Zero = cravado

    if (v < 0)
    {
        // Multiplicamos por -1 apenas para exibir o valor positivo na tela
        printf("O troco a ser devolvido eh R$%.2f\n\n", v * -1);
    }
    else if (v == 0)
    {
        printf("A compra esta paga!\n\n");
    }
    else
    {
        // Se não é menor que zero nem igual a zero, só pode ser maior.
        // Logo, só usamos o 'else'.
        printf("Falta pagar R$%.2f\n\n", v);
    }

    return 0;
}