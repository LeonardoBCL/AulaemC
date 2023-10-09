#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
    setlocale (LC_ALL, "portuguese");

    float valorProduto;
    int selecao;
    float desconto;
    float precoFinal;
    int parcelas;
    float valorPorParcela;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Digite 1 para pagamento a vista. \n");
    printf("DIgite 2 para pagamento a prazo. \n");
    printf("Digite a opção desejada: ");
    scanf("%d", &selecao);



    switch (selecao)
    {

        case 1 :
            desconto = valorProduto * 0.1;
            precoFinal = valorProduto - desconto;


            printf("Valor do produto: R$ %.2f \n", valorProduto);
            printf("Forma de pagamento: A vista \n");
            printf("Valor do desconto %.2f \n", desconto);
            printf("Total a pagar: R$ %.2f \n", precoFinal);
            break;      

        case 2:
            do{
            printf("Digite a quantidade de parcelas: ");
            scanf("%d", &parcelas);
            
            
            
            if (parcelas > 6){
                printf("\n O parcelamento pode ser ;feito em até 6 parcelas.");
                printf("Tente novamente... \n \n");
            }
            


            } while (parcelas > 6);
            valorPorParcela = valorProduto / parcelas;
            precoFinal = valorProduto - desconto;

            

            printf("Valor do produto: R$ %.2f \n", valorProduto);
            printf("Forma de pagamento: A prazo \n");
            printf("Quantidade de parcelas: R$ %d \n", parcelas);
            printf("Valor por parcelas: R$ %.2f \n", valorPorParcela);
            printf("Total a prazo: R$ %.2f \n", precoFinal);
            break;

        default:
            printf("Opcao invalida!");

        break;

        getchar(); // Pausa no Windows e no Linux
        return 0;

    }

















}