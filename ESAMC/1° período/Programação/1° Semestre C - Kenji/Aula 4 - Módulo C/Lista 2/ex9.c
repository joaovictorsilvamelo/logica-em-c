/*9. Leia um valor de tempo em minutos e converta esse tempo para horas e
segundos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v;
    printf("Informe 1 para a versao matematica e 2 para versao do relogio: ");
    scanf("%d", &v);

    switch (v)
    {
    case 1:
    { // <-- CHAVE ABRINDO O BLOCO DO CASE 1
        float m, h, s;
        printf("Informe o valor dos minutos: ");
        scanf("%f", &m);

        h = m / 60;
        s = m * 60;

        printf("VALOR EM HORAS: %.2f\nVALOR EM SEGUNDOS: %.2f\n", h, s);
        break;
    } // <-- CHAVE FECHANDO O BLOCO DO CASE 1

    case 2:
    { // <-- CHAVE ABRINDO O BLOCO DO CASE 2
        int minutos_totais, horas, minutos_restantes, segundos_totais;
        printf("Informe o valor dos minutos: ");
        scanf("%d", &minutos_totais);

        // Lógica com inteiros e módulo
        horas = minutos_totais / 60;
        minutos_restantes = minutos_totais % 60;

        // Os segundos totais continuam sendo uma multiplicação simples
        segundos_totais = minutos_totais * 60;

        printf("\nCONVERSAO DIRETA:");
        printf("\nTotal em segundos: %d segundos", segundos_totais);

        printf("\n\nFORMATO DE RELOGIO:");
        printf("\nO tempo equivale a %d hora(s) e %d minuto(s).\n", horas, minutos_restantes);
        break;
    } // <-- CHAVE FECHANDO O BLOCO DO CASE 2

    default:
        printf("Opcao invalida! Digite apenas 1 ou 2.\n");
        break;
    }

    return 0;
}