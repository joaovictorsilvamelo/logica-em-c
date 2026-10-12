#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX_CARAC 50

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char frase[MAX_CARAC];
int i;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Insira a frase para ser codificada: ");
    fgets(frase, MAX_CARAC, stdin);
    frase[strcspn(frase, "\n")] = '\0';

    i = 0;
    while (frase[i] != '\0')
    {
        frase[i] += 2;
        i++;
    }

    printf("\nA frase codificada Ã©: %s\n", frase);

    return 0;
}