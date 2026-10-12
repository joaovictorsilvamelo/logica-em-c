#include <stdio.h>

int main()
{
    int i = 1;
    float media, n1, n2, n3, recu, mediaFinal;

    printf("Informe a nota %d: ", i);
    scanf("%f", &n1);
    printf("Informe a nota %d: ", i + 1);
    scanf("%f", &n2);
    printf("Informe a nota %d: ", i + 2);
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    // 1º Cenário: Passou direto
    if (media > 7)
    {
        printf("\nSua media foi %.2f. Parabens, voce esta aprovado!\n\n", media);
    }
    // 2º Cenário: Ficou de Recuperação
    else if (media >= 5)
    {
        printf("\nSua media foi %.2f. Voce esta de recuperacao!!!\n", media);
        printf("Informe a nota da sua prova de recuperacao: ");
        scanf("%f", &recu);

        // O ENUNCIADO PEDE PARA CALCULAR A NOVA MÉDIA FINAL
        mediaFinal = (media + recu) / 2;

        // IF ANINHADO: Essa validação acontece DENTRO do cenário de recuperação
        // (Assumindo que para passar na recu a nova média precisa ser >= 5)
        if (mediaFinal >= 5)
        {
            printf("\nNova media: %.2f. Parabens! Voce foi aprovado na recuperacao!!!\n\n", mediaFinal);
        }
        else
        {
            printf("\nNova media: %.2f. Infelizmente voce foi reprovado na recuperacao.\n\n", mediaFinal);
        }
    }
    // 3º Cenário: Reprovado direto (Menor que 5)
    else
    {
        printf("\nSua media foi %.2f. Voce esta reprovado direto!\n\n", media);
    }

    return 0;
}