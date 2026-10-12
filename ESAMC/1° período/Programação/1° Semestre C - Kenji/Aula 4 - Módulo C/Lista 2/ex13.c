/*13.Leia a quantidade de dias trabalhados por um funcionário e calcule o
salário total considerando um valor fixo pago por dia trabalhado.*/

#include <stdio.h>
#define VALOR_DIARIA 250.00 // Definindo valor da diária como uma constante

int main()
{
    int dias;
    float salario;

    printf("Insira a quantidade de dias trabalhados: ");
    scanf("%d", &dias);
    salario = dias * VALOR_DIARIA;

    printf("\nO valor do salario a ser pago eh R$%.2f\n\n", salario);
    return 0;
}