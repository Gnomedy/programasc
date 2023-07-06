#include <stdio.h>

 int main() {
	 long int cpf;
	 int dependentes;
	 double renda_anual, renda_liquida, imposto;
 
	 while (1) {
		 printf("Digite o número do CPF (ou 0 para encerrar): ");
		 scanf("%ld", &cpf);
 
		 if (cpf == 0) {
		 break;
		 }
 
		 printf("Digite o número de dependentes: ");
		 scanf("%d", &dependentes);
 
		 printf("Digite a renda anual: ");
		 scanf("%lf", &renda_anual);
 
		 // Cálculo da renda líquida com desconto por dependente
		 renda_liquida = renda_anual - (dependentes * 600.00);
 
		 // Cálculo do imposto de renda de acordo com as faixas de alíquota
		 if (renda_liquida <= 2500.00) {
		   imposto = 0.00;
		 } else if (renda_liquida <= 5500.00) {
				 imposto = renda_liquida * 0.05;
		 } else if (renda_liquida <= 11000.00) {
				 imposto = renda_liquida * 0.10;
		 } else {
				 imposto = renda_liquida * 0.12;
		 }
 
		 printf("CPF: %ld\n", cpf);
		 printf("Imposto de Renda a pagar: R$%.2lf\n\n", imposto);
	 }

 return 0;
}