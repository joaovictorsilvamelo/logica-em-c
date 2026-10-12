#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_LINHAS 50
#define MAX_COLUNAS 50

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char banco_nomes[MAX_LINHAS][MAX_COLUNAS] = {"Ana", "Pedro", "Angelo", "Eduardo", "Maria"};
char letra;
int i, j;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Insira a letra para buscar os nomes correspondentes: ");
    scanf("%c", &letra);

    printf("\nNomes encontrados: ");
    for (i = 0; i <= MAX_LINHAS - 1; i++)
    {
        if (letra == banco_nomes[i][0])
        {
            printf("\n%s", banco_nomes[i]);
        }
        else if (banco_nomes[i][0] == '\0')
        {
            break;
        }
    }

    return 0;
}