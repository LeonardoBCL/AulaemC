#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Estrutura padr�o                                              
//
int main() {
    
    setlocale(LC_ALL, "portuguese");

    char nome [250] = "leo";
    char senha [250] = "123";
    char usuario [250];
    char senhapass [250];

    
    printf("Insira o seu usu�rio: ");
    gets(usuario);
    
    fflush(stdin);

    printf("Insira a sua senha: ");
    gets(senhapass);

    if (strcmp (nome,usuario) == 0 && strcmp (senha, senhapass ) == 0) {
        printf("Bem vindo.");
    }
    else{
        printf("Usu�rio ou senha inv�lido.");
    }


    







}