#include <stdio.h>

int main()
{
    int numeroDeFilhos, i;
    char nomeFilhos[50];
    
    printf("Digite o número de filhos: ");
    scanf("%d", &numeroDeFilhos);
    
    for(i=0; i<numeroDeFilhos; i++) {
        printf("Digite o nome do filho %d: ", i+1);
        scanf("%[^\n]", nomeFilhos);
        
        printf("Filho %d: %s\n", i+1, nomeFilhos);
    }
    return 0;
}