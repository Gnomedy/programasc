#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 1, x, proximoNumero;
    
    for(x=0; x <= 15; x++) {
        if(x <= 1) {
            proximoNumero = x;
        }
        
        else {
            proximoNumero = num1 + num2;
            num1 = num2;
            num2 = proximoNumero;
        }
        
        printf("\n%d", proximoNumero);
    }

    return 0;
}