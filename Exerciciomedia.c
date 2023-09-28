#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

char nome [250];
int idade = 0;
int ano = 2023;
int mediaidade = 0;
float notaum = 0;
float notadois = 0;
float notatres = 0;
float medianota = 0;


printf("Insira o seu nome");
gets(nome);

printf("Olá, %s \n", nome);
printf("Insira a sua idade \n");
scanf("%d", &idade);

mediaidade = ano - idade;

printf("A média de idade anual do aluno: ");
printf("%d", mediaidade);

printf("Insira primeira nota: ");
scanf("%f", &notaum);

fflush(stdin);

printf("Insira a segunda nota: ");
scanf("%f", &notadois);

fflush(stdin);

printf("Insira a terceira nota: ");
scanf("%f", &notatres );

medianota = (notaum + notadois + notatres)/3;
printf("A média é: %f", medianota);

}