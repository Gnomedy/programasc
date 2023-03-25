#include <stdio.h>

#define NUMERO_DE_TENTIVAS 5

int main() {
        // imprime cabeçalho do nosso jogo
        printf("****************************************\n");
        printf("*Bem vindo ao nosso jogo de adivinhação*\n");
        printf("****************************************\n");

        int numerosecreto = 42;

        int chute;
        
        for(int i = 1; i <= NUMERO_DE_TENTIVAS; i++) {
        
        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTIVAS);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
        int menor = chute < numerosecreto;

        if (acertou) {
            printf("Parabens! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador\n");
            break;
            
        } 
            
            else if (maior) {
                printf("Seu chute foi maior que o numero secreto\n");
            } 
            
            else {
                printf("Seu chute foi menor que o número secreto\n");
            }
        
    }
    
    printf("Fim de jogo");
}