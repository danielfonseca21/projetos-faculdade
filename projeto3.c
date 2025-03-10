#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int posicionarNavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    if (coluna + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        return 0;  // Não cabe horizontalmente
    }
    
    for (int i = coluna; i < coluna + TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha][i] != 0) {
            return 0;  
        }
    }

    for (int i = coluna; i < coluna + TAMANHO_NAVIO; i++) {
        tabuleiro[linha][i] = 3; 
    }
    return 1;  
}


int posicionarNavioVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    if (linha + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        return 0;  // Não cabe verticalmente
    }
    
    
    for (int i = linha; i < linha + TAMANHO_NAVIO; i++) {
        if (tabuleiro[i][coluna] != 0) {
            return 0;  
        }
    }

    
    for (int i = linha; i < linha + TAMANHO_NAVIO; i++) {
        tabuleiro[i][coluna] = 3;  
    }
    return 1;  
}

int main() {
   
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    int linhaNavioHorizontal = 2, colunaNavioHorizontal = 1;
    int linhaNavioVertical = 5, colunaNavioVertical = 7;

    if (posicionarNavioHorizontal(tabuleiro, linhaNavioHorizontal, colunaNavioHorizontal)) {
        printf("Navio horizontal posicionado com sucesso!\n");
    } else {
        printf("Falha ao posicionar o navio horizontal!\n");
    }

    if (posicionarNavioVertical(tabuleiro, linhaNavioVertical, colunaNavioVertical)) {
        printf("Navio vertical posicionado com sucesso!\n");
    } else {
        printf("Falha ao posicionar o navio vertical!\n");
    }

    printf("\nTabuleiro final:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
