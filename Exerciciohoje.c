#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Estrutura padrÃ£o
int main() {
    setlocale(LC_ALL, "portuguese");
int numero = 0; // <- Especificando tipo de variÃ¡vel

printf("Por favor, insira um valor: ");
scanf("%d", &numero); //Solicitando dados
printf("\n");

//Aplicando o se:
if (numero==10){
    printf("Número é igual a 10");
} else if (numero > 10) {
    printf("Número é maior que 10");
} else if (numero > 5) {
    printf("Número é maior do que 5");
} else if (numero > 3) {
    printf("Número não é maior do que 3");
} else {
    printf("O número é menor que 3");
}

}
