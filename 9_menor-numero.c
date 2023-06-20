#include <stdio.h>

int main() {
		int numero, maior, menor;
		int possuiNumeros = 0; 
	  printf("Digite um número positivo (ou um número negativo para encerrar): ");
	  scanf("%d", &numero);
 if (numero > 0) {
	  maior = numero;
	  menor = numero;
	  possuiNumeros = 1;
    }
 
		while (numero > 0) {
			printf("Digite um número positivo (ou um número negativo para encerrar): ");
	    scanf("%d", &numero);
    
			if (numero > 0) {
 
				if (!possuiNumeros) {
					 maior = numero;
					 menor = numero;
					 possuiNumeros = 1;
				} else {
				  if (numero > maior) {
					   maior = numero;
				}
 
				if (numero < menor) {
				    menor = numero;
		    }
	    }
    }
  }
  if (possuiNumeros) {
		 printf("Maior número: %d\n", maior);
		 printf("Menor número: %d\n", menor);
	 } else {
		 printf("Nenhum número positivo foi inserido.\n");
   }
 return 0;
}