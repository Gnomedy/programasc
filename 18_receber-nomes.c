#include <stdio.h>
#include <string.h>
#define MAX_NOME 50

int main() {
 char nome[MAX_NOME];
 int totalNomes = 0;
 char resposta[1];
 
do {
 printf("Digite um nome: ");
 scanf("%s", nome);
 
 totalNomes++;
 
 printf("Há mais nomes a serem informados? (S/N): ");
 scanf("%s", resposta);
 } while (strcmp(resposta, "s") == 0 || strcmp(resposta, "S") == 0);
 
 printf("\nTotal de nomes informados: %d\n", totalNomes - 1);
 
 return 0;
}