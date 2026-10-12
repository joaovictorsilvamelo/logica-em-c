/*10 Uma biblioteca permite que usuários peguem livros emprestados por até 7
dias. Caso o livro seja devolvido após esse prazo, é cobrada uma multa de
R$ 2,50 por dia de atraso.*/

#include <stdio.h>

int main()
{
    int dias;
    float valor;

    printf("Informe os dias que voce pegou o livro emprestado: ");
    scanf("%d", &dias);

    if (dias <= 7)
    {
        printf("Parabens! Voce nao tem nenhuma multa!\n\n");
    }
    else
    {
        printf("O valor da multa eh R$%.2f\n\n", valor = (dias - 7) * 2.50);
    }

    return 0;
}