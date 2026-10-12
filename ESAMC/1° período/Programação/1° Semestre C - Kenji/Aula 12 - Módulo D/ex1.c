#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int matriz[3][3];
int i, j;

int main(int argc, char *argv[])
{
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (j == i)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }

    for (i = 0; i <= 2; i++)
    {
        printf("\n");
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
    }
    return 0;
}