#include <stdio.h>
#include <math.h>

int main()
{
    int expoente, base, resultado;
    
    base = 2;
    
    printf("As primeiras 20 Potências de 2 são: ");
    
    for(expoente = 0; expoente<=20; expoente++) {
        
        resultado = pow(base, expoente);
        printf("\n 2^%d = %d",expoente, resultado);
    
    }
    
    return 0;
}