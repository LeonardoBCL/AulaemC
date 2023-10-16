#include <stdio.h>
#include <stdlib.h>



int main (){
//Variável:
int num;
int contador;
int soma = 0;


for (contador = 1; contador <= 5; contador++){
    printf("Digite o %d numero : ", contador);
    scanf("%d", &num);

    soma += num;

}


printf("Soma: %d", soma);

return 0;

}