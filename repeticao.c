#include <stdio.h>
#include <stdlib.h>





int main(){
    
    //Variaveis    
    
    int contador;

    //.............................................

    
    /*
    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = ; i = 10; i++){
        printf("%d x %d = %d \n", i, numero, i * numero);

    }

    getchar();
    return 0;

    
    */

     //variável de controle do loop
  
  for(contador = 2; contador <= 20; contador += 2)
  {
    printf("%d ", contador);
  }
    
   //Segunda forma:


    for(contador = 1; contador <= 20; contador++)
  {
    if ( contador % 2 == 0) {
        printf("%d \n", contador);
    }
  }
    








}
