#include <stdio.h>
#include <stdlib.h>


int main() {
	
	//Variáveis:
	
	int contador, numeros_negativos, soma = 0;
	int positivo = 0;
	int numero [4];
	int contavez = 0;
	
	//Questão:
	
	for ( contador = 0; contador < 4; contador++){
	
	printf("Insira o %dº numero: ", contavez+1);
	scanf("%d", &numero[4]);
	
	if (numero[4] > 0) {
		
		positivo++;
		
	
	}
	
	else if (numero[4] < 0) {
		numeros_negativos++;
		
	}
	
	soma+= positivo;
	
}
	//EXibe resultado:
	printf("\n \tExibindo resultado:");
	printf("\n Soma dos positivos: %d", soma);
	printf("\n Quantidade de negativos inseridos: %d", numeros_negativos);
	
	

}
