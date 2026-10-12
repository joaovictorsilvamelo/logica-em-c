/*15.Leia a quantidade de páginas de três capítulos de um livro e calcule o
número total de páginas do livro.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int pag, pagtotal = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Informe a quantidade de paginas do capitulo %d: ", i + 1);
        scanf("%d", &pag);
        pagtotal += pag;
    }

    printf("\nO numero total de paginas do livro eh: %d\n\n", pagtotal);

    return 0;
}