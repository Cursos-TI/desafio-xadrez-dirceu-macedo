#include <stdio.h>

// ==========================
// Funções recursivas
// ==========================

// Torre (anda só para a direita)
void moverTorre(int casas) {
    if (casas <= 0) return; // Caso base
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Rainha (anda só para a esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo (recursividade + loops aninhados)
void moverBispo(int casas, int passo) {
    if (passo > casas) return; // Caso base
    for (int v = 0; v < 1; v++) { // Loop vertical (aqui é sempre 1 passo para cima)
        for (int h = 0; h < 1; h++) { // Loop horizontal (1 passo para direita)
            printf("Cima\n");
            printf("Direita\n");
        }
    }
    moverBispo(casas, passo + 1); // Próxima casa
}

int main() {
    // ==========================
    // Constantes de movimento
    // ==========================
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    const int movimentosCavalo = 3; // quantidade de movimentos do cavalo

    // ==========================
    // Movimento da TORRE
    // ==========================
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // ==========================
    // Movimento do BISPO
    // ==========================
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo, 1);
    printf("\n");

    // ==========================
    // Movimento da RAINHA
    // ==========================
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // ==========================
    // Movimento do CAVALO
    // ==========================
    printf("Movimento do Cavalo:\n");
    for (int m = 0; m < movimentosCavalo; m++) {
        for (int i = 0, j = 0; i < 3 && j < 2; i++, j++) {
            if (i < 2) {
                printf("Cima\n"); // duas casas para cima
                continue;
            }
            printf("Direita\n"); // uma casa para a direita
            break; // fim do movimento em L
        }
    }

    return 0;
}
