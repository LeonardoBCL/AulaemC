#include <stdio.h>
#include <stdlib.h>

float nota;
int contador;
float media;
float soma = 0;

int main()
{

    for (contador = 0; contador < 2; contador++)
    {

        do
        {
            printf("Digite %d nota: ", contador + 1);
            scanf("%f", &nota);

        } while (nota < 0 || nota > 10);
        soma += nota;
    }

    media = soma / contador;
    printf("Média final:%.2f ", media);

    return 0;
}