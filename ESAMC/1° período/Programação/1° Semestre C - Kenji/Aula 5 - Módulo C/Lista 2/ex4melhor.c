#include <stdio.h>

int main()
{
    int escolha;

    // Adicionei um \n e "Sua escolha:" no final para a digitação ficar na linha de baixo
    printf("Escolha alguma das opcoes:\n=> 1 - Calcular a area do triangulo.\n=> 2 - Calcular o perimetro de um triangulo.\nSua escolha: ");

    // ERRO CORRIGIDO: scanf no lugar do printf
    scanf("%d", &escolha);

    if (escolha == 1)
    {
        float area, b, h;

        printf("\nInforme a base do triangulo: ");
        scanf("%f", &b);
        printf("Informe a altura do triangulo: ");
        scanf("%f", &h);

        area = (b * h) / 2;

        printf("A area do triangulo eh: %.2f\n\n", area);
    }
    else if (escolha == 2) // BLINDAGEM: Garante que só entra aqui se digitar 2
    {
        float perimetro, l1, l2, l3;

        printf("\nInforme o lado 1 do triangulo: ");
        scanf("%f", &l1);
        printf("Informe o lado 2 do triangulo: ");
        scanf("%f", &l2);
        printf("Informe o lado 3 do triangulo: ");
        scanf("%f", &l3);

        perimetro = l1 + l2 + l3;

        printf("O perimetro do triangulo eh: %.2f\n\n", perimetro);
    }
    else
    {
        // Se não for nem 1 nem 2, o programa avisa o erro
        printf("\nOpcao invalida! Execute o programa novamente.\n\n");
    }

    return 0;
}