/*18.Leia o tempo gasto em três etapas de uma corrida e calcule o tempo total
gasto na prova.*/

#include <stdio.h>

int main()
{
    int tempo, tempototal = 0, segundo, minuto, hora;

    for (int i = 0; i < 3; i++)
    {
        printf("Informe o tempo gasto em minutos na %da etapa da corrida: ", i + 1);
        scanf("%d", &tempo);
        tempototal += tempo;
    }

    // calculado com o quantificador % (resto ou módulo)
    hora = tempototal / 60;
    minuto = tempototal % 60;
    segundo = minuto % 60;

    printf("\nO tempo informado gasto na corrida foram %d minutos. Convertendo o tempo, teremos:", tempototal);
    printf("\n\n=>%d horas, %d minutos e %d segundos.\n\n", hora, minuto, segundo);

    return 0;
}