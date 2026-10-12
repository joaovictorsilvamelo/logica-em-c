#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int i, soma = 0, vet1[3], vet2[3];

    for (i = 0; i < 3; i++)
    {
        printf("Insira o valor %d do primeiro vetor: ", i + 1);
        scanf("%d", &vet1[i]);

        printf("Insira o valor %d do segundo vetor: ", i + 1);
        scanf("%d", &vet2[i]);

        // Já aproveita que os valores acabaram de chegar e faz a conta na mesma hora!
        soma += vet1[i] * vet2[i];
    }

    // O segundo laço for desaparece completamente!

    printf("\nO produto escalar entre os dois vetores e igual a %d.\n", soma);

    return 0;
}