#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Estrutura padrÃ£o
int main() {
    
    setlocale(LC_ALL, "portuguese");

int numeroum = 0;
int numerodois = 0;
float media = 0;
int soma = 0;
int produto = 0;

printf("Insira um n�mero: \n");
scanf("%d", &numeroum);

printf("Insira outro n�mero: \n");
scanf("%d", &numerodois);

media = (numeroum + numerodois)/2;
printf("A m�dia dos n�meros inseridos equivalem a: %f \n", media);
printf("\n");

soma = (numeroum + numerodois);
printf("A soma dos n�meros �: %d \n", soma);

produto = (numeroum*numerodois);
printf("A multiplica��o dos dois n�meros resultam em: %d \n", produto);

if (numeroum>numerodois) {
    printf("O primeiro n�mero � MAIOR do que o segundo.");
}
else {
    printf("O segundo n�mero � MAIOR que o primeiro");
}
}













