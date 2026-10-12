#include <stdio.h>

int main()
{
    int tempo, tempototal = 0;
    int hora, minuto, segundo, resto;

    for (int i = 0; i < 3; i++)
    {
        // Pedindo o tempo em SEGUNDOS para ter a precisão completa
        printf("Informe o tempo gasto em SEGUNDOS na %da etapa da corrida: ", i + 1);
        scanf("%d", &tempo);
        tempototal += tempo;
    }

    // 1. Quantas horas inteiras cabem no tempo total?
    hora = tempototal / 3600;

    // 2. Quantos segundos sobraram que não formaram uma hora?
    resto = tempototal % 3600;

    // 3. Quantos minutos inteiros cabem no que sobrou?
    minuto = resto / 60;

    // 4. O que sobrou dos minutos são os segundos finais!
    segundo = resto % 60;

    printf("\nO tempo total gasto na corrida foi de %d segundos.\nConvertendo o tempo, teremos:", tempototal);
    printf("\n\n=> %d horas, %d minutos e %d segundos.\n\n", hora, minuto, segundo);

    return 0;
}