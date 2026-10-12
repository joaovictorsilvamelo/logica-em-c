#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variáveis alinhadas ao fluxograma apresentado
    float euros, custo;
    int quantidade;
    char doce;

    // Passo 1: Exibir a tabela com as listas dos precos
    printf("--------------LISTA DE PRECOS DOS DOCES DA LOJA--------------\n\n");
    printf("A - Marshmallow: 0.20 Euros\n");
    printf("B - Bubble gum: 0.30 Euros\n");
    printf("C - Jelly Bean: 0.15 Euros\n");
    printf("D - Candy Stick: 0.35 Euros\n");
    printf("E - Cola Whips: 0.22 Euros\n");
    printf("X - Sair do menu\n\n");

    // Passo 2: Perguntar quanto gostaria de gastar na loja (Dinheiro inicial do usuario)
    printf("Informe quantos euros voce possui: ");
    scanf("%f", &euros);

    // Passo 6: Repita os passos enquanto o usuario tiver algum dinheiro restante
    // (O fluxograma usa especificamente dinheiro > 0)
    while (euros > 0)
    {
        // Passo 3: Perguntar qual doce ele gostaria de comprar
        printf("\nQual doce voce gostaria de comprar? (De A a E, ou X para sair): ");
        scanf(" %c", &doce); // O espaco antes do %c eh obrigatorio para limpar o "Enter" da memoria!

        // Passo 4: Permitir que o usuario digite X para parar de comprar
        if (doce == 'X' || doce == 'x')
        {
            printf("Saindo da loja. Volte sempre!\n");
            break; // O 'break' quebra o laco 'while' e encerra o programa
        }

        // Continuacao do Passo 3: Perguntar QUANTOS doces ele quer
        printf("Quantos doces voce gostaria de comprar? ");
        scanf("%d", &quantidade);

        custo = 0; // Zerando o custo atual

        // Calculando o custo exato: Preco do doce * quantidade desejada
        switch (doce)
        {
        case 'A':
        case 'a':
            custo = 0.20 * quantidade;
            break;
        case 'B':
        case 'b':
            custo = 0.30 * quantidade;
            break;
        case 'C':
        case 'c':
            custo = 0.15 * quantidade;
            break;
        case 'D':
        case 'd':
            custo = 0.35 * quantidade;
            break;
        case 'E':
        case 'e':
            custo = 0.22 * quantidade;
            break;
        default:
            printf("Opcao invalida! Escolha uma letra do menu.\n");
            continue; // O 'continue' ignora as linhas de baixo e faz o 'while' recomecar de novo
        }

        // Passo 5: Verifique se o usuario tem condicoes de arcar com os custos
        if (euros >= custo)
        {
            euros = euros - custo; // Atualiza o saldo subtraindo o custo
            printf("Compra aprovada! Custou %.2f euros. Seu saldo restante e de %.2f euros.\n", custo, euros);
        }
        else
        {
            // Mensagem para falta de saldo
            printf("Voce nao tem dinheiro suficiente para essa compra!\n");
        }
    }

    printf("\nFim das operacoes. Seu troco final eh: %.2f euros.\n", euros);

    return 0;
}