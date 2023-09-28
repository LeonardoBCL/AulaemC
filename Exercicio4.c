#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Estrutura padrÃƒÂ£o
int main() {
    
    setlocale(LC_ALL, "portuguese");

int numeroum = 0;
int numerodois = 0;
float media = 0;
int soma = 0;
int produto = 0;

printf("Insira um número: \n");
scanf("%d", &numeroum);

printf("Insira outro número: \n");
scanf("%d", &numerodois);

media = (numeroum + numerodois)/2;
printf("A média dos números inseridos equivalem a: %f \n", media);
printf("\n");

soma = (numeroum + numerodois);
printf("A soma dos números é: %d \n", soma);

produto = (numeroum*numerodois);
printf("A multiplicação dos dois números resultam em: %d \n", produto);

if (numeroum>numerodois) {
    printf("O primeiro número é MAIOR do que o segundo.");
}
else {
    printf("O segundo número é MAIOR que o primeiro");
}
}













