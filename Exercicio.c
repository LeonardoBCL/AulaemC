#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    float valormaca = 2.50;
    int kgmaca;
    float valorcompra;
    float desconto;
    float valortotal;

    printf("Qtd maca (KG's) : ");
    scanf("%d", &kgmaca);

    if (kgmaca>5){
        valormaca = 2.20;
        valortotal = valormaca * kgmaca; 
    } 
    else {
        valormaca = 2.50;
        valortotal = valormaca * kgmaca;
    }


    if (kgmaca > 8 || valorcompra > 25) {
        valormaca = 2.20 * kgmaca;
        desconto = valormaca * 0.1;
        valorcompra = valormaca - desconto;

    }
    printf("\n O valor da compra SE desconto aplicado: %.2f", valorcompra);
    printf("\n Valor sem desconto: %.2f", valortotal);



}