#include <stdio.h>

int main() {
    
    int soma, number, numeroEscolhido;
		soma = 0;
    
    printf("Digite um número: ");
    
    scanf("%d", &numeroEscolhido);

    for(number = 1; number <= numeroEscolhido; number += 1)
        soma += number;
    
		    printf("\n%d", soma);
    
    return 0;
}