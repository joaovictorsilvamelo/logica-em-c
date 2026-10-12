#include <stdio.h>

#define MULTA_DIARIA 2.50 // Aproveitando para usar a constante que você já aprendeu!

int main()
{
    int dias;
    float valor;

    printf("Informe os dias que voce ficou com o livro: ");
    scanf("%d", &dias);

    if (dias <= 7)
    {
        printf("Parabens! Voce devolveu no prazo e nao tem nenhuma multa!\n\n");
    }
    else
    {
        // 1º passo: Faz a conta e guarda na variável
        valor = (dias - 7) * MULTA_DIARIA;

        // 2º passo: Exibe na tela
        printf("Atraso detectado! O valor da multa eh R$%.2f\n\n", valor);
    }

    return 0;
}