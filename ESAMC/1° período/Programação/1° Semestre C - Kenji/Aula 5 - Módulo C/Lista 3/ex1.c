/*1. Solicite um ano ao usuário e informe se ele é bissexto.*/

#include <stdio.h>

int main()
{
    int ano;

    printf("PROGRAMA PARA VERIFICAR SE UM ANO EH BISSEXTO OU NAO!\n\nInforme um ano: ");
    scanf("%d", &ano);

    // Se a condição for verdadeira, entra aqui e PULA o else.
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
    {
        printf("\nPARABENS!!!!!!! O ano eh bissexto!\n\n");
    }
    // Se a condição for falsa, PULA o if e entra aqui.
    else
    {
        printf("\nERROU!!!!! O ano nao eh bissexto!\n\n");
    }

    return 0;
}