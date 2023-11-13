#include <stdio.h>
#include <stdlib.h>




int main(){
	
	float notas [4];
	int contador = 0;
	float media;
	int soma;
	
	for (contador = 0; contador < 4; contador++){
	

	printf("\n Digite a %dª nota: ", contador + 1);
	scanf("%f", &notas[contador]);
	
	soma += notas[contador];
	
	

}

media = soma / contador; //A variável contador, sairá do laço com o valor 4

printf("\n Exibindo as notas: ");

for (contador = 0; contador < 4; contador++){
	

	printf("Nota: %.1f ", notas[contador]);
	
}

if (media >= 7 ){
	printf("\n Aprovado!");
}
else if( media >= 5){
	printf("\n Recuperacao");
}
else if (media < 5){
	printf("\n Reprovado ");
}
	
	return 0;
		
	
}
