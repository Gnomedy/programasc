#include <stdio.h>

int main() {
 int total_habitantes = 0;
 int maior_idade = 0;
 int total_mulheres_olhos_verdes_cabelos_louros = 0;
 int idade, idade_limite_inferior = 18, idade_limite_superior = 35;
 char sexo, olhos, cabelos;
 double porcentagem_mulheres_olhos_verdes_cabelos_louros;
 
	while (1) {
	 printf("Digite o sexo do habitante (M/F ou 0 para encerrar):");
	 scanf(" %c", &sexo);
 
	if (sexo == 'M' || sexo == 'F') {
		 printf("Digite a cor dos olhos do habitante (A/V/C): ");
		 scanf(" %c", &olhos);
 
		 printf("Digite a cor dos cabelos do habitante (L/C/P): ");
		 scanf(" %c", &cabelos);
 
		 printf("Digite a idade do habitante: ");
		 scanf("%d", &idade);
 
		 if (idade > maior_idade) {
	   maior_idade = idade;
	   }
 
		 if (sexo == 'F' && idade >= idade_limite_inferior && idade <= idade_limite_superior 
&& olhos == 'V' && cabelos == 'L') {
		 total_mulheres_olhos_verdes_cabelos_louros++;
	   }
  
		total_habitantes++;
	  } else {
		  break;
	  }
	 }
 
	porcentagem_mulheres_olhos_verdes_cabelos_louros = 
(double)total_mulheres_olhos_verdes_cabelos_louros / total_habitantes * 100;
 
	printf("A maior idade dos habitantes é: %d\n", maior_idade);
  printf("A porcentagem de mulheres com olhos verdes, cabelos louros e idade entre 
%d e %d anos é: %.2lf%%\n", idade_limite_inferior, idade_limite_superior, 
porcentagem_mulheres_olhos_verdes_cabelos_louros);
 
return 0;
}