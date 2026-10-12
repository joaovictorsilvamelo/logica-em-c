/*1 Um professor deseja calcular a média final de um aluno em uma disciplina.
Para isso, ele utiliza três notas obtidas pelo aluno ao longo do semestre.
Caso a média seja maior ou igual a 60, o aluno é aprovado. Caso contrário,
ele está reprovado.*/

#include <stdio.h>

int main()
{
    int i = 1;
    float n1, n2, n3, media;

    printf("Informe a nota da %d prova do aluno: ", i);
    scanf("%f", &n1);
    printf("Informe a nota da %d prova do aluno: ", i + 1);
    scanf("%f", &n2);
    printf("Informe a nota da %d prova do aluno: ", i + 2);
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 60)
    {
        printf("\nAprovado!\n\n");
    }
    else
    {
        printf("\nReprovado!\n\n");
    }
    
    return 0;
}