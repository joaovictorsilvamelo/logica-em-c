#include <stdio.h>

int main()
{
    // 1. Declarar e inicializar variáveis corretamente
    int n_sorteados[6] = {10, 20, 30, 40, 50, 60};
    int n_escolhidos[6];
    int acertos = 0; // FUNDAMENTAL: O placar sempre tem que começar zerado!

    printf("--- Jogo da Mega-Sena ---\n");

    // 2. Laço EXCLUSIVO para ler os 6 números do usuário
    for (int i = 0; i < 6; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &n_escolhidos[i]); // AGORA SIM: guardando no vagão [i]
    }

    // 3. Laços aninhados para comparar as duas listas (O "i" e o "j")
    for (int i = 0; i < 6; i++)
    { // O 'i' segura um número seu...
        for (int j = 0; j < 6; j++)
        { // O 'j' passa por todos os sorteados procurando ele

            if (n_escolhidos[i] == n_sorteados[j])
            {
                acertos++; // Achou um número igual? Ponto para você!
                break;     // Achou? O break para a procura (o 'j') e vai pro próximo número seu
            }
        }
    }

    // 4. A sua estrutura visual de vitória (intacta e funcional)
    if (acertos == 4)
    {
        printf("\nQUADRAAAA!! VOCE GANHOU!!\n\n");
    }
    else if (acertos == 5)
    {
        printf("\nQUINAAAAA!! VOCE GANHOU!!\n\n");
    }
    else if (acertos == 6)
    {
        printf("\nSENAAAAAA!! VOCE GANHOU!!\n\n");
    }
    else
    {
        printf("\nVoce teve %d acerto(s). Tente a sorte outro dia!\n\n", acertos);
    }

    return 0;
}