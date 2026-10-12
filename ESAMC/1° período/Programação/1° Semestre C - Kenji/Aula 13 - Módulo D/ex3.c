#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float media(float n1, float n2, float n3, char op)
{
    float result;

    switch (op)
    {
    case 'A':
        result = (n1 + n2 + n3) / 3;
        break;
    case 'P':
        result = (n1 * 5 + n2 * 3 + n3 * 2) / (5 + 3 + 2);
        break;
    case 'H':
        result = 3 / (1 / n1 + 1 / n2 + 1 / n3);
        break;
    default:
        return -1;
        break;
    }

    return result;
}

int main(int argc, char *argv[])
{
    float nota1, nota2, nota3, resultado;
    char operacao;

    printf("Insira a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("Insira a segunda nota do aluno: ");
    scanf("%f", &nota2);

    printf("Insira a terceira nota do aluno: ");
    scanf("%f", &nota3);

    fflush(stdin);
    printf("Insira a operacao desejada:\n\tA - media aritmetica\n\tP - media ponderada\n\tH - media harmonica: ");
    scanf("%c", &operacao);

    resultado = media(nota1, nota2, nota3, operacao);

    printf("O resultado e igual a: %f", resultado);
    return 0;
}