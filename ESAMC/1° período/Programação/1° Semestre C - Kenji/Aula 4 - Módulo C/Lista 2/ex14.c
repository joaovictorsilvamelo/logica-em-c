/*14.Leia uma distância em quilômetros e calcule quantos metros e quantos
centímetros essa distância representa.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float km;

    printf("Informe a distancia em km: ");
    scanf("%f", &km);

    printf("A distancia em km foi %.2f, e convertendo em metros e centimetros fica:\nMETROS: %.2f\nCENTIMETROS: %.2f\n\n", km, km * 1000, km * 1000000);
    return 0;
}