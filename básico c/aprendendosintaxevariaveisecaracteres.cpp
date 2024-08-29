#include <stdio.h>
char nome[50];
char sobrenome[50];
int idade=2;
char genero;

int main(){
printf("Escreva seu primeiro nome:\n");
scanf("%s", nome);
printf("Nome digitado:\n");

printf("Escreva seu sobrenome:\n");
scanf("%s", sobrenome);
printf("Sobrenome digitado:\n");

printf("Escreva sua idade:\n");
scanf("%d", idade);
printf("Idade digitada:\n");

printf("Digite seu genero:\n");
scanf("%c", genero);
printf("Genero digitado\n");	

printf("Info: nome: %s sobrenome: %s idade: %d genero: %c", nome, sobrenome, idade, genero);
printf("escreva");
}
