#include <stdio.h>

int main() {
    
    int number, numeroDaTabuada, multiplicador;
    
    
    printf("Escolha a tabuada: ");
    
    scanf("%d", &numeroDaTabuada);

    for(number = 0; number <= (10*numeroDaTabuada); number += numeroDaTabuada) {
        
        multiplicador++;
        printf("\n %d x %d = %d", numeroDaTabuada, multiplicador-1, number);
    
    }
    
    return 0;
}