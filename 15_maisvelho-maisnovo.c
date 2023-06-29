#include <stdio.h>
#include <string.h>
#define MAX_NOME 50

int main() {
 char nome[MAX_NOME];
 int anoNascimento;
 char nomeMaisVelha[MAX_NOME];
 char nomeMaisNova[MAX_NOME];
 int anoMaisVelha = 0;
 int anoMaisNova = 9999;
 char resposta[3];
 int ano = 2023;
 do {
	 printf("Digite o nome da pessoa: ");
	 scanf("%s", nome);
	 printf("Digite o ano de nascimento da pessoa: ");
	 scanf("%d", &anoNascimento);
	 if (anoNascimento > anoMaisVelha) {
			strcpy(nomeMaisVelha, nome);
			anoMaisVelha = anoNascimento;
 }
	 if (anoNascimento < anoMaisNova) {
			 strcpy(nomeMaisNova, nome);
			 anoMaisNova = anoNascimento;
 }
 
	printf("Deseja adicionar mais uma pessoa? (Sim ou Nao): ");
	scanf("%s", resposta);
 } while (strcmp(resposta, "Sim") == 0 || strcmp(resposta, "sim") == 0);
	 printf("A pessoa mais nova é: %s\n", nomeMaisVelha);
	 printf("\nA pessoa mais velha é: %s\n", nomeMaisNova);
 
	 return 0;
}