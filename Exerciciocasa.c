#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idade = 0;

    printf("Verificação de obrigatoriedade ao voto \n");

    printf("\n");
    printf("Por favor, digite a sua idade: ");
    scanf("%d", &idade);
    printf("\n");
    printf("A sua idade é: %d \n", idade);

    if (idade > 18 && idade < 65)
    {
        printf("O voto é obrigatório \n");
    }
    else
    {
        printf("Voto não obrigatório \n");
    }
}
