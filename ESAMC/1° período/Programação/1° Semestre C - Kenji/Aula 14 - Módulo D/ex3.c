#include <stdio.h>

int main()
{
    int i, mat[2][2] = {{1, 2}, {4, 3}};

    for (i = 0; i < 2; i++)
    {
        int j = 0;

        while (j < 2)
        {
            if (mat[i][j] % 2 == 0)
            {
                mat[i][j]++;
            }
            else
            {
                mat[i][j]--;
            }
            j++;
        }

        printf("%d ", mat[i][0] + mat[i][1]);
    }
    return 0;
}
