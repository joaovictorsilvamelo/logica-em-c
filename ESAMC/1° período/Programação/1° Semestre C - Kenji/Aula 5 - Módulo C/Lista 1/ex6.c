/*6 Uma federação esportiva classifica atletas conforme sua idade:
• Até 12 anos → Infantil
• 13 a 17 anos → Juvenil
• 18 anos ou mais → Adulto
*/

#include <stdio.h>

int main()
{
    int idade;

    printf("Informe a idade: ");
    scanf("%d", &idade);

    if (idade <= 12)
    {
        printf("Infantil!\n\n");
    }
    else if (idade <= 17) // O computador já sabe que é > 12 para ter chegado aqui
    {
        printf("Juvenil!\n\n");
    }
    else // Se não é <= 12 e não é <= 17, obrigatoriamente é >= 18
    {
        printf("Adulto!\n\n");
    }

    return 0;
}