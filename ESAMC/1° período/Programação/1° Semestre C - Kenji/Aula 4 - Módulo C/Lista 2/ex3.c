/*3. Um drone realizou quatro voos em um mesmo dia. Leia a distancia
percorrida em cada voo e calcule a distancia total percorrida pelo drone.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m[4], dt;

    for (int i = 0; i < 4; i++)
    {
        printf("Insira a distancia em metros que o drone voou: ");
        scanf("%f", &m[i]);
        dt = dt + m[i];
    }

    printf("\nA distancia total em metros percorrida pelo drone foi: %.2f", dt);

    return 0;
}