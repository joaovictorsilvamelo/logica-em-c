#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp, somaTemp = 0, mediaTemp;
    int i, qtTempPos = 0, qtTempNeg = 0;

    for (i = 1; i <= 30; i = i + 1)
    {
        printf("Insira a temperatura do dia %d: ", i);
        scanf("%f", &temp);

        if (temp >= 0)
        {
            qtTempPos = qtTempPos + 1;
            somaTemp = somaTemp + temp;
        }
        else
        {
            qtTempNeg = qtTempNeg + 1;
        }
    }

    mediaTemp = somaTemp / 30;

    printf("A quantidade de temperaturas positivas foi igual a: %d", qtTempPos);
    printf("\nA quantidade de temperaturas negativas foi igual a: %d", qtTempNeg);
    printf("\nA media das temperaturas positivas foi igual a: %f", mediaTemp);

    return 0;
}
