#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Estrutura padrão
int main() {
    setlocale(LC_ALL, "portuguese");
int numero = 0; // <- Especificando tipo de variável

printf("Por favor, insira um valor: ");
scanf("%d", &numero); //Solicitando dados
printf("\n");

//Aplicando o se:
if (numero==10){
    printf("N�mero � igual a 10");
} else if (numero > 10) {
    printf("N�mero � maior que 10");
} else if (numero > 5) {
    printf("N�mero � maior do que 5");
} else if (numero > 3) {
    printf("N�mero n�o � maior do que 3");
} else {
    printf("O n�mero � menor que 3");
}

}
