#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int op(int a, int b)
{
    if (b % a == 1)
    {
        return (a * b);
    }
    else
    {
        return (a + b);
    }
}

int main()
{
    int i, j, res;

    j = 5, res = 0;
    for (i = 1; i <= j; i++)
    {
        res += op(i, j);
    }

    printf("O resultado e igual a: %d", res);
    return 0;
}