/*6. Uma escola possui três turmas. Leia a quantidade de alunos em cada
turma e calcule o número total de alunos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nalunos[3], totalalunos = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Digite a quantidade de alunos da turma %d: ", i + 1);
        scanf("%d", &nalunos[i]);
        totalalunos += nalunos[i];
        system("cls");
    }

    printf("O numero total de alunos eh: %d", totalalunos);

    return 0;
}