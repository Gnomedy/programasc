#include <stdio.h>
#include <math.h>

int main() {
 int numero;
 int soma = 0;
 char resposta[4];
 
 do {
	 printf("Digite um número: ");
	 scanf("%d", &numero);
	 
	 soma += numero;
	 printf("Há mais números a serem somados? (S/N): ");
	 scanf("%s", resposta);
 } while (numero != 0 && (resposta[0] == 's' || resposta[0] == 'S'));
 
 printf("\nA soma dos números informados é: %d\n", soma);
 return 0;
}