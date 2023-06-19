#include <stdio.h>


int main() {
    int impar;
    
    printf("Os ímpares entre 100 e 200 são: ");
    
    for(impar = 100; impar <= 200; impar++) {
        if(impar%2 == 1) { 
            printf("\n%d", impar);
        }
    }
}