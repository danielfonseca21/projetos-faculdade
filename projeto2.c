#include <stdio.h>

int main() {

    int movimento_torre = 5;
    int movimento_bispo = 5;
    int movimento_rainha = 8;

  
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimento_torre; i++) {
        printf("Direita\n");
    }

    
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < movimento_bispo) {
        printf("Cima, Direita\n");
        j++;
    }

    
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < movimento_rainha);

    return 0;
}
