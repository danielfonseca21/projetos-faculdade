#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para posicionar o navio horizontalmente
int posicionarNavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    if (coluna + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        return 0;  // Não cabe horizontalmente
    }
    
    // Verificar se as posições estão livres
    for (int i = coluna; i < coluna + TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha][i] != 0) {
            return 0;  // Há sobreposição com outro navio
        }
    }

    // Posicionar o navio
    for (int i = coluna; i < coluna + TAMANHO_NAVIO; i++) {
        tabuleiro[linha][i] = 3;  // Representa a parte do navio
    }
    return 1;  // Navio posicionado com sucesso
}

// Função para posicionar o navio verticalmente
int posicionarNavioVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    if (linha + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        return 0;  // Não cabe verticalmente
    }
    
    // Verificar se as posições estão livres
    for (int i = linha; i < linha + TAMANHO_NAVIO; i++) {
        if (tabuleiro[i][coluna] != 0) {
            return 0;  // Há sobreposição com outro navio
        }
    }

    // Posicionar o navio
    for (int i = linha; i < linha + TAMANHO_NAVIO; i++) {
        tabuleiro[i][coluna] = 3;  // Representa a parte do navio
    }
    return 1;  // Navio posicionado com sucesso
}

int main() {
    // Inicializando o tabuleiro com água (0)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Definindo as coordenadas de posicionamento dos navios
    int linhaNavioHorizontal = 2, colunaNavioHorizontal = 1;
    int linhaNavioVertical = 5, colunaNavioVertical = 7;

    // Posicionando os navios
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

    // Exibindo o tabuleiro
    printf("\nTabuleiro final:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
