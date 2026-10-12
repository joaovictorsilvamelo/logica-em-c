#include <stdio.h>

int main()
{
    int mat[2][2] = {{1, 2}, {4, 5}};
    int i, j;
    i = 1;

    while (i >= 0)
    {
        j = 0;
        while (j <= 1)
        {
            if (mat[i][j] >= mat[j][i])
            {
                mat[i][j] = mat[i][i] * 2;
            }
            else
            {
                mat[j][i] = mat[j][j] - 10;
            }
            j++;
        }
        i--;
    }

    for (i = 0; i <= 1; i++)
    {
        printf("\n");
        for (j = 0; j <= 1; j++)
        {
            printf("%d ", mat[i][j]);
        }
    }
    return 0;
}
