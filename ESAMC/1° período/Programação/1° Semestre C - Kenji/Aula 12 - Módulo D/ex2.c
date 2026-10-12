#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX_LINHAS 50
#define MAX_COLUNAS 50

char banco_nomes[MAX_LINHAS][MAX_COLUNAS] = {"Maria", "Betania", "Joao", "Jose"};
char nome[MAX_COLUNAS];
int i, flag;

int main()
{
    printf("Insira o nome:");
    fgets(nome, MAX_COLUNAS, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    flag = 0;
    for (i = 0; i <= MAX_COLUNAS; i++)
    {
        if (!strcmp(banco_nomes[i], nome))
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("\nNome encontrado no banco de dados!\n");
    }
    else
    {
        printf("\nNome nÃ£o ncontrado no banco de dados!\n");
    }

    return 0;
}