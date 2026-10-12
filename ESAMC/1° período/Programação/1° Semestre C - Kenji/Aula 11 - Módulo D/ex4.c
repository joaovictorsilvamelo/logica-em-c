#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char gabarito[11] = "ABCEABADCB";
char respostas[11];
int i, acertos;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    for (i = 0; i < 10; i++)
    {
        printf("Insira a resposta da questÃ£o %d do aluno: ", i + 1);
        fflush(stdin);
        scanf("%c", &respostas[i]);
    }

    acertos = 0;
    for (i = 0; i < 10; i++)
    {
        if (gabarito[i] == respostas[i])
        {
            acertos++;
        }
    }

    printf("\nO aluno obteve %d acertos na prova.\n", acertos);

    return 0;
}