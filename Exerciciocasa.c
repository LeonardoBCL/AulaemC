#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idade = 0;

    printf("Verifica��o de obrigatoriedade ao voto \n");

    printf("\n");
    printf("Por favor, digite a sua idade: ");
    scanf("%d", &idade);
    printf("\n");
    printf("A sua idade �: %d \n", idade);

    if (idade > 18 && idade < 65)
    {
        printf("O voto � obrigat�rio \n");
    }
    else
    {
        printf("Voto n�o obrigat�rio \n");
    }
}
