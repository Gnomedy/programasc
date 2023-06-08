#include <stdio.h>

int main() {
    
    int contador, numeroRecebido;
    
    printf("Digite um número: ");
    
    scanf("%d", &numeroRecebido);
    
    for(contador = 0; contador <= numeroRecebido; contador++) {
        
        printf("\n%d", contador);
        
    }
    
    return 0;
}