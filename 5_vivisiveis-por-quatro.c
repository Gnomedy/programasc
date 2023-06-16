#include <stdio.h>

int main() {
    
    int divisores, number;
    
    printf("Digite um número: ");
    
    scanf("%d", &number);
    
    printf("Os números até %d, que são divisíveis por 4, são: ", number);
    
    for(divisores = 0; divisores <= number; divisores += 4) {
        
        printf("\n%d", divisores);
    }
    
    return 0;
}