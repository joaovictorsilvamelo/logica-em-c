/*7. Leia o peso de uma pessoa em quilogramas e converta esse valor para
gramas e miligramas.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kg;

    printf("Informe o peso em quilogramas (kg): ");
    scanf("%f", &kg);

    printf("O valor convertido para:\nGRAMAS: %.2f\nMILIGRAMAS: %.2f\n\n", kg*1000, kg*1000000);

    return 0;
}