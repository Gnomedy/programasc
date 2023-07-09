
#include <stdio.h>
#include <limits.h>
int main() {
 int numero_boi, numero_boi_gordo, numero_boi_magro;
 float peso_boi, peso_boi_gordo = 0.0, peso_boi_magro = INT_MAX;
 
 for (int i = 1; i <= 90; i++) {
	 printf("Informe o número do boi %d: ", i);
	 scanf("%d", &numero_boi);
 
	 printf("Informe o peso do boi %d em kg: ", i);
	 scanf("%f", &peso_boi);
 
	 if (peso_boi > peso_boi_gordo) {
		 peso_boi_gordo = peso_boi;
		 numero_boi_gordo = numero_boi;
		 }
 
		 if (peso_boi < peso_boi_magro) {
			 peso_boi_magro = peso_boi;
			 numero_boi_magro = numero_boi;
		 }
	 }
 
	 printf("O boi mais gordo é o número %d, com peso %.2f kg\n", numero_boi_gordo, 
peso_boi_gordo);
	 printf("O boi mais magro é o número %d, com peso %.2f kg\n", numero_boi_magro, 
peso_boi_magro);
 return 0;
}