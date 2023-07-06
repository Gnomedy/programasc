#include <stdio.h>
#include <limits.h>

int main() {
 int valor, menor = INT_MAX;
 
 while (1) {
	 printf("Digite um valor (ou -1 para encerrar): ");
	 scanf("%d", &valor);
 
	 if (valor == -1) {
	 break;
   }
 
	 if (valor < menor) {
		 menor = valor;
	 }
  }
 
	if (menor != INT_MAX) {
		 printf("O menor valor do conjunto é: %d\n", menor);
	 } else {
		 printf("Nenhum valor válido foi informado.\n");
	 }

	 return 0;
}