#include <stdio.h>
#include <stdlib.h>

float nota;
int contador;
float media;
float soma = 0;
//char resultado [200];
int main()
{

    for (contador = 0; contador < 3; contador++)
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

    if (media>=7){
        printf("\n O aluno está aprovado!");
    }
    else if (media >= 5 && media<=6.9){
        printf("\n O aluno está em recuperação");

    }
    else if (media<5){
        printf("\n O aluno está reprovado");
    }

    //strcpy (resultado, "aprovado!");
    
    
    
    
    
    return 0;



}