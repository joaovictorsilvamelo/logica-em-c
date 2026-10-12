#include <stdio.h>
#include <string.h>
#include <locale.h>

char palavra[200];
int inicio, fim, flag;

int main()
{
    fgets(palavra, sizeof(palavra), stdin);
    // Estou inserindo a string "Ame o poema"

    flag = 0;
    inicio = 0;
    fim = strlen(palavra) - 1;

    while (inicio < fim)
    {
        if (palavra[inicio] == palavra[fim])
        {
            inicio++;
            fim--;
        }
        else
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("\n\nÃ‰!\n");
    }
    else
    {
        printf("\n\nNÃ£o Ã©!\n");
    }

    return 0;
}