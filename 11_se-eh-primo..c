#include <stdio.h>
#include <stdbool.h>

int main() {
    int number, x;
    bool eh_primo = true;
    
    printf("Digite um número: ");
    
    scanf("%d", &number);
    
    for( x = 2; x < number; x++) {
         
         if(number%x == 0) {
            eh_primo = false;
            break;
        }
    }
    
    if(eh_primo)
        printf("\nO número %d é primo", number);
    else
        printf("\nO número %d não é primo", number);
    
    return 0;
    
}