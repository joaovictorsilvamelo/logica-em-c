#include <stdio.h>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char key[10] = "12345";
char senha_inserida[10];
int resultado;

int main()
{
    printf("Insira a senha: ");
    fgets(senha_inserida, sizeof(senha_inserida), stdin);
    senha_inserida[strcspn(senha_inserida, "\n")] = '\0';

    resultado = strcmp(key, senha_inserida);
    if (!strcmp(key, senha_inserida))
    {
        printf("\n\nAcesso permitido!\n");
    }
    else
    {
        printf("\n\nAcesso negado!\n");
    }

    return 0;
}