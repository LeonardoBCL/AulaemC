#include <stdio.h>
#include <stdlib.h>


int main(){
	
	//Variaveis:
	
	int numeros [5];
	int contador = 0;
	int soma = 0;
	int guarda_maior = 0;
	int guarda_menor = 9999;
	
	//Questão:
	
	
	
	
	for (contador = 0; contador < 5; contador++){
	
	printf("Insira o %dª numero: ", contador + 1);
	scanf("%d", &numeros[5]);
	
	if (numeros[contador] < guarda_menor){
		guarda_menor = numeros[contador];
	}
	
	
}
	printf("\n Exibindo numeros:");
	
	for (contador = 0; contador < 5; contador++){
		printf("numeros: %d \n", numeros[contador]);
	}
	printf("\nO menor numero entrado e: %d", guarda_menor);
	printf("\nO maior numero entrado e: %d", guarda_maior);
	
	
return 0;

	
}
