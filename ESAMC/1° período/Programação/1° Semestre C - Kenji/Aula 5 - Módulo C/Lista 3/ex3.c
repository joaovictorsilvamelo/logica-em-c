/*3. Dada uma variável inteira inserida pelo usuário e simulando uma
senha (ex: 4 dígitos):
Verifique:
a. Se tem exatamente 4 dígitos
b. Se não possui dígitos repetidos
c. Se não é sequência crescente (ex: 1234)
*/

#include <stdio.h>

int main()
{
    int senha, a, b, c, d;

    printf("Informe a senha (contem 4 digitos): ");
    scanf("%d", &senha);

    if (senha < 1000 || senha > 9999)
    {
        printf("\nVoce nao digitou 4 numeros!! Fim do programa.\n\n");
        return 0;
    }
    else
    {
        a = senha / 1000;
        b = (senha / 100) % 10;
        c = (senha / 10) % 10;
        d = senha % 10;

        if (a == b || a == c || a == d || b == c || b == d || c == d)
        {
            printf("Ha digitos repetidos, senha invalida!!!");
        }
        else if (b == a + 1 && c == b + 1 && d == c + 1)
        {
            printf("Ha sequencia crescente, senha invalida!!!");
        }
        else
        {
            printf("Senha valida e segura!!!\n\n");
        }
    }

    return 0;
}