/*4 Um sistema precisa verificar se uma pessoa é maior ou menor de idade. A
idade mínima considerada é 18 anos.
*/

#include <stdio.h>

int main()
{
    int idade;

    printf("Informe a idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Voce eh maior de idade!\n\n");
    }
    else
    {
        printf("Voce eh menor de idade!\n\n");
    }

    return 0;
}