#include <stdio.h>
#include <math.h>

int main()
{
    int i, num;

    printf("Insira o numero que deseja realizar a tabuada: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, num, i * num);
    }

    return 0;
}
