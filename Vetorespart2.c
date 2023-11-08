#include <stdio.h>
#include <stdlib.h>


int main(){

//Vetor

float numeros[3];
int contador;

for (contador = 0; contador < 3; contador++){
printf("\n Digite a %dª nota: ", contador + 1);
scanf("%f", &numeros[contador]);
}


for (contador = 0; contador < 3; contador++){

    printf("\n Posicao %d recebe nota: %.1f", contador + 1, numeros[contador]);
}








}