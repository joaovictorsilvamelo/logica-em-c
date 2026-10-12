/*2. Solicite ao usuário 3 notas do aluno. Caso a média seja maior que
7, ele está aprovado. Se a média estiver entre 5 e 7, ele está de
recuperação. Caso contrário, está reprovado. Se estiver de
recuperação, solicite ao usuário a nota dessa prova e calcule a
nova média final, informando-o se o aluno foi aprovado ou não.*/

#include <stdio.h>

int main()
{
    int i = 1;
    float media, n1, n2, n3, recu;

    printf("Informe a nota %d: ", i);
    scanf("%f", &n1);
    printf("Informe a nota %d: ", i + 1);
    scanf("%f", &n2);
    printf("Informe a nota %d: ", i + 2);
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    if (media > 7.00)
    {
        printf("\nParabens, voce esta aprovado!\n\n");
    }
    else if (media >= 5)
    {
        printf("\nVoce esta de recuperaçao!!!\n");
        printf("Informe a nota da sua recuperacao: ");
        scanf("%f", &recu);
    }
    else if (recu > 7.00)
    {
        printf("\nParabens! Voce passou na recuperacao e foi aprovado!!!\n\n");
    }
    else
    {
        printf("\nVoce esta reprovado!\n\n");
    }

    return 0;
}