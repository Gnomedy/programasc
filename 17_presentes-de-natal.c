#include <stdio.h>
#include <string.h>
#define MAX_NOME 50

int main() {
 char nomeFuncionario[MAX_NOME];
 int numFilhos;
 char nomeFilho[MAX_NOME];
 int idadeFilho;
 char sexoFilho;
 int totalMeninosAte5 = 0;
 int totalMeninasAte5 = 0;
 int totalMeninos5a12 = 0;
 int totalMeninas5a12 = 0;
 float custoCarrinho = 2.50;
 float custoBoneca = 3.00;
 float custoBola = 1.45;
 float totalCusto = 0.0;
 
do {
	 printf("Digite o nome do funcionario (ou '0' para encerrar): ");
	 scanf("%s", nomeFuncionario);

	 if (strcmp(nomeFuncionario, "0") == 0) {
	 break;
   }

	 printf("Digite o numero de filhos menores de 12 anos: ");
	 scanf("%d", &numFilhos);
 
	 for (int i = 0; i < numFilhos; i++) {
 
		 printf("Digite o sexo do %d° filho (F ou M): ", i + 1);
		 scanf(" %c", &sexoFilho);
 
		 printf("Digite o nome do %d° filho: ", i + 1);
		 scanf("%s", nomeFilho);
 
		 printf("Digite a idade do %d° filho: ", i + 1);
		 scanf("%d", &idadeFilho);
 
		 if (idadeFilho <= 5) {
		 if (sexoFilho == 'M') {
			 totalMeninosAte5++;
		 } else if (sexoFilho == 'F') {
			 totalMeninasAte5++;
		 }
		 totalCusto += custoBola;
	 } else if (idadeFilho > 5 && idadeFilho <= 12) {
		 if (sexoFilho == 'M') {
				totalMeninos5a12++;
				totalCusto += custoCarrinho;
		 } else if (sexoFilho == 'F') {
			 totalMeninas5a12++;
			 totalCusto += custoBoneca;
		 }
	 }
 }
 printf("\n");
 
} while (1);
 printf("Total de meninos ate 5 anos: %d\n", totalMeninosAte5);
 printf("Total de meninas ate 5 anos: %d\n", totalMeninasAte5);
 printf("Total de meninos de 5 a 12 anos: %d\n", totalMeninos5a12);
 printf("Total de meninas de 5 a 12 anos: %d\n", totalMeninas5a12);
 printf("Total de dinheiro necessario para a compra: R$ %.2f\n", totalCusto);
 
return 0;
}