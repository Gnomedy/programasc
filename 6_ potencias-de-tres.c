#include <stdio.h>
#include <math.h>

int main()
{
    int expoente, base, resultado;
    
    base = 3;
    
    printf("Potências de 3 de 0 a 10 são: ");
    
    for(expoente = 0; expoente<=10; expoente++) {
        
        resultado = pow(base, expoente);
        printf("\n 3^%d = %d",expoente, resultado);
    
    }
    
    return 0;
}