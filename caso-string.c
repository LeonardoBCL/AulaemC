#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

char sexo;
float altura;
float formula;


printf("Calculadora de peso \n \n");

printf("Para calcular seu peso, insira primeiro seu sexo: \n");
scanf("%c", &sexo);




switch (sexo){

    case 'm':
        printf("Digite a sua altura: \n");
        scanf("%.2f", &altura);
        formula = (72.7 * altura) - 58;
        printf("\n %.2f", formula);
        break;

    case 'f':
    printf("Digite a sua altura: \n");
        scanf("%.2f", &altura);
        formula = (62.1 * altura) - 44.7;
        printf("\n %.2f", formula);
        break;
    
    default:
        printf("Opcão inválida!");

        break;




    getchar();
    return 0;















}
















}

