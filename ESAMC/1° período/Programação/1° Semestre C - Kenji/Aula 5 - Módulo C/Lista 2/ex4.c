/*4. Escreva um programa que dê ao usuário a opção de calcular a área ou o
perímetro de um triângulo. De acordo com a escolha do usuário, solicite
os valores necessários para o cálculo e informe o resultado.*/

#include <stdio.h>

int main()
{
    int escolha;

    printf("Escolha alguma das opcoes:\n=> 1 - Calcular a area do triangulo.\n=> 2 - Calcular o perimetro de um triangulo.\n");
    scanf("%d", &escolha);

    if (escolha == 1)
    {
        float area, b, h;

        printf("Informe a base do triangulo: ");
        scanf("%f", &b);
        printf("Informe a altura do triangulo: ");
        scanf("%f", &h);

        area = (b * h) / 2;

        printf("A area do triangulo eh: %.2f\n\n", area);
    }
    else if (escolha == 2)
    {
        float perimetro, l1, l2, l3;

        printf("Informe o lado 1 do triangulo: ");
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
        printf("NENHUMA DAS OPCOES SELECIONADAS!! Execute o programa novamente.\n\n");
    }

    return 0;
}