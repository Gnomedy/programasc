#include <stdio.h>
#include <string.h>
#define MAX_NOME 50

int main() {
 char nome[MAX_NOME];
 float nota1, nota2, nota3, nota4;
 float media;
 
 while (1) {
	 printf("Digite o nome do aluno (ou \"FIM\" para encerrar): ");
	 scanf("%s", nome);
	 
	 if (strcmp(nome, "FIM") == 0) {
	 break; // Encerra o loop caso o nome seja "FIM"
   }
 
	 printf("Digite as 4 notas do aluno (separadas por espaço): ");
   scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

	 media = (nota1 + nota2 + nota3 + nota4) / 4.0;
	 printf("Média do aluno %s: %.2f\n\n", nome, media);
	}

 return 0;
}