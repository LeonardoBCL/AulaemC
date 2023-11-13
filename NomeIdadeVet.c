#include <stdio.h>
#include <stdlib.h>




int main(){
	
//Variaveis:

int idade [5];
char nomes [200] [5]; //Vetor de String 
int contador = 0;
	
//Questão:	
	
for (contador = 0; contador < 3; contador++){
	
printf("\n Preencha c/ seu nome: ");
scanf("%s", &nomes [contador]);	


fflush (stdin);


printf("\n Preencha c/ sua idade: ");
scanf("%d", &idade [contador]);
	
}

// Exibe:
printf("\n \t Exibindo resultados: \n");

for (contador = 0; contador < 3; contador++){
	printf("\n Nomes: %s", nomes[contador]);
	printf("\n Idade: %d", idade[contador]);
}
	
}
