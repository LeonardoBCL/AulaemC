#include <stdio.h>
#include <stdlib.h>


//Vetores.
/*
                                        
Vetor Ex 01:
V[0] = 4                              
V[1] = 7
V[2] = 3
V[5] = 5

V = 4, 7 , 3, 5

*/

   /*Inicialização no momento de declaração:

    int numeros [5] = {1,2,3,4,5};

    Inicialização posterior:
    int numeros[5]; <- Aqui dentro há 5 posições ( lendo o colchete)
    numeros[0] = 1; <- Define posição e o valor da posição. Colchete a posição
    e o 1 é o valor da posição 0
    numeros[1] = 2;
    numeros[2] = 3;
    numeros[3] = 4;
    numeros[4] = 5;
    */

int main(){
   
   //Exemplo 01:

   //Recebendo 5 números inteiros do usuário e inserindo o valor:
   int numeros [5];
   int contador;

   printf("\n Digite os elementos do vetor: ");

   for (contador = 0; contador <5; contador++){

    printf("\n Elemento %d: ", contador + 1);
    scanf("%d", &numeros[contador]);

   }

   //Exibindo os dados em um vetor em um laço de repetição.

   for(contador = 0; contador < 5; contador++){

    printf("\n \n \t Valor inserido no elemento %d = %d \n", contador + 1, numeros[contador]);

    return 0;

   }



}