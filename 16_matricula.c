#include <stdio.h>
#include <string.h>
#define MAX_NOME 50

int main() {
 char nome[MAX_NOME];
 int numeroAlunos = 0;
 char resposta[3];

 do{
	 printf("Digite o nome do aluno (ou '0' para encerrar): ");
	 scanf("%s", nome);
 
	 if (strcmp(nome, "0") == 0) {
	 break;
   }
	 printf("Deseja matricular mais um aluno? (S/N): ");
	 scanf("%s", resposta);
 
	 if(strcmp(resposta, "N") == 0 || strcmp(resposta, "n") == 0) {
	 break;
	 }else {
	 numeroAlunos++;
	 }
	}while (strcmp(resposta, "S") == 0 || strcmp(resposta, "s") == 0);
 
 printf("\nTotal de alunos matriculados: %d\n", numeroAlunos);
 return 0;

}