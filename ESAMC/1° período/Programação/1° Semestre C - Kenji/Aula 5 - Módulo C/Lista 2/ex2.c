/*2. Escreva um programa que solicite a idade de uma pessoa e informe em
qual estágio da vida ela se encontra de acordo com as seguintes
informações:
a. se tiver menos de 1 ano: bebê;
b. se tiver entre 2 e 12 anos: criança;
c. se tiver entre 13 e 17: adolescente;
d. se tiver entre 18 e 25: adolescente adulto;
e. se tiver entre 26 e 64: adulto;
f. se tiver mais de 64 anos: idoso.*/

#include <stdio.h>

int main()
{
    int idade;

    printf("Por favor, informe sua idade: ");
    scanf("%d", &idade);

    if (idade < 1)
    {
        printf("O seu estagio da vida eh de bebe!\n\n");
    }
    else if (idade <= 12)
    {
        printf("O seu estagio da vida eh de crianca!\n\n");
    }
    else if (idade <= 17)
    {
        printf("O seu estagio da vida eh de adolescente!\n\n");
    }
    else if (idade <= 25)
    {
        printf("O seu estagio da vida eh de adolescente adulto!\n\n");
    }
    else if (idade <= 64)
    {
        printf("O seu estagio da vida eh de adulto!\n\n");
    }
    else
    {
        printf("O seu estagio da vida eh de idoso!\n\n");
    }

    return 0;
}