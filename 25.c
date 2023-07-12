#include <stdio.h>
#include <math.h>

int main() {
 char comodo[50];
 int classe, largura, comprimento;
 double potencia, num_lampadas, total_lampadas = 0, total_potencia = 0;
 
while (1) {
	 printf("Digite o cômodo da residência (ou 'FIM' para encerrar): ");
	 scanf("%s", comodo);
 
	 if (strcmp(comodo, "FIM") == 0) {
	 break;
	 }
 
		printf("Digite a classe de iluminação do cômodo: ");
		scanf("%d", &classe);
 
		printf("Digite a largura do cômodo em metros: ");
	  scanf("%d", &largura);
 
		printf("Digite o comprimento do cômodo em metros: ");
	  scanf("%d", &comprimento);
 
			switch (classe) {
				 case 1:
				 potencia = 15;
				 break;
				 case 2:
				 potencia = 18;
				 break;
				 case 3:
				 potencia = 20;
				 break;
				 default:
				 printf("Classe de iluminação inválida.\n");
				 continue;
			 }
		 
			 num_lampadas = ceil((largura * comprimento * potencia) / 60);
			 total_lampadas += num_lampadas;
			 total_potencia += (num_lampadas * 60);
			 
			 printf("Cômodo: %s\n", comodo);
			 printf("Potência de iluminação: %.2lf W\n", potencia);
			 printf("Número de lâmpadas necessárias: %.0lf\n\n", num_lampadas);
		 }
 
		 printf("Total de lâmpadas: %.0lf\n", total_lampadas);
		 printf("Total de potência: %.2lf W\n", total_potencia);
		 
		 return 0;
		 }