#include <stdio.h>

int main() {
    int escolherOpcao;
    float number1, number2;
    float divisao, multiplicacao, soma, subtracao;
    
    char menu[] = "*********************\n1 - DIVISÃO\n2 - MULTIPLICAÇÃO\n3 - 
SOMA\n4 - SUBTRAÇÃO\n5 - SAIR\nEscolha uma operação:";
    
    printf("*********************");
    printf("\n*****CALCULADORA*****");
    printf("\n*********************");
    
    while(escolherOpcao != 5) {
        
        printf("\n%s", menu);
        scanf("%d", &escolherOpcao);
        
        if(escolherOpcao == 1) {
            
            printf("Primeiro número: ");
            scanf("%f", &number1);
            
            printf("Segundo número: ");
            scanf("%f", &number2);
            
            divisao = number1/number2;
            
            printf("\n%.2f/%.2f = %.2f", number1, number2, divisao);
        }
        
        if(escolherOpcao == 2) {
            
            printf("Primeiro número: ");
            scanf("%f", &number1);
            
            printf("Segundo número: ");
            scanf("%f", &number2);
            
            multiplicacao = number1 * number2;
            
            printf("\n%.2f x %.2f = %.2f", number1, number2, multiplicacao);
        }
        
        if(escolherOpcao == 3) {
            
            printf("Primeiro número: ");
            scanf("%f", &number1);
            
            printf("Segundo número: ");
            scanf("%f", &number2);
            
            soma = number1 + number2;
            
            printf("\n%.2f + %.2f = %.2f", number1, number2, soma);
        }
        
        if(escolherOpcao == 4) {
            
            printf("Primeiro número: ");
            scanf("%f", &number1);
            
            printf("Segundo número: ");
            scanf("%f", &number2);
            
            subtracao = number1 - number2;
            
            printf("\n%.2f - %.2f = %.2f", number1, number2, subtracao);
        }
    }
    
    return 0;
}