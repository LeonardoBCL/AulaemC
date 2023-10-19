#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Variavies:

    int valor;
    float soma = 0;
    int contador = 0;
    float media;

    // Operação:

    
        do
        {
            printf("Insira um valor: \n");
            scanf("%d", &valor);

            if (valor > 0)
            {
             soma += valor;
             contador++;
            }
            

        } while (valor > 0);
        
        media = soma / contador;
        printf("Média: %.1f", media);

    return 0;
}