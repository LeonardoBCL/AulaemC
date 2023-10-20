#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int main (){

    //Variáveis:

    char usuario [200];
    char senha [200];


    //Questão 15:

    do{

    printf("\n Por favor, insira seu login: ");
    scanf("%s", &usuario);

    printf("\n Por favor, insira sua senha: ");
    scanf("%s", &senha);

    if (strcmp (usuario, "administrador") == 0 && strcmp( senha, "123" ) == 0) {
        printf("\n \t Login e senha corretas.");
        sleep (3);

        system("cls");
    } 

    else {
        printf("\n Senha ou Login incorretos.");
    } 
        
    
    } while (strcmp (usuario, "administrador") != 0 && strcmp( senha, "123" ) != 0);



}