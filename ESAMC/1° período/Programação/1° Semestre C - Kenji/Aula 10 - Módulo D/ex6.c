#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, j, k, flag, count_esc = 0, num[10], num_esc[10], num_rep[10];

    for (i = 0; i < 10; i++)
    {
        printf("Insira o valor da posicao %d do vetor: ", i);
        scanf("%d", &num[i]);
        num_rep[i] = 0;
    }

    for (i = 0; i < 10; i++)
    {
        flag = 0;

        if (i == 0)
        {
            num_esc[0] = num[0];
        }
        else
        {
            for (k = 0; k < count_esc; k++)
            {
                if (num[i] == num_esc[k])
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag)
        {
            continue;
        }
        else
        {
            num_esc[count_esc] = num[i];
        }

        for (j = i; j < 10; j++)
        {
            if (num[i] == num[j])
            {
                num_rep[count_esc]++;
            }
        }

        count_esc++;
    }

    for (i = 0; i < count_esc; i++)
    {
        printf("O numero %d foi repetido %d vezes.\n", num_esc[i], num_rep[i]);
    }

    return 0;
}