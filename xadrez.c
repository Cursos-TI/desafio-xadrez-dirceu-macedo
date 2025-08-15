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

// Bispo (recursividade)
void moverBispo(int casas) { 
    if (casas <= 0) return;
     printf("Cima\n");
     printf("Direita\n");
     moverBispo(casas - 1);
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
    moverBispo(casasBispo);
    printf("\n");

    // ==========================
    // Movimento da RAINHA
    // ==========================
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // ==================================================
    // Movimento do CAVALO (loops aninhados + continue/break)
    // 2 casas para Cima e 1 para Direita por movimento
    // ==================================================
    printf("Movimento do Cavalo:\n");
    for (int mov = 0; mov < movimentosCavalo; mov++) {        // repete o "L"
        for (int segmento = 0; segmento < 2; segmento++) {     // 0 = vertical, 1 = horizontal
            int maxPassos = (segmento == 0) ? 2 : 1;           // 2 "Cima" e 1 "Direita"
            for (int passo = 0; passo < 3; passo++) {          // loop interno com condição extra
                if (passo >= maxPassos) {
                    // No segmento vertical, ignore passos excedentes;
                    // no horizontal, encerre o segmento.
                    if (segmento == 0) {
                        continue;
                    } else {
                        break;
                    }
                }

                if (segmento == 0) {
                    printf("Cima\n");
                } else {
                    printf("Direita\n");
                }
            }
        }
    }

    return 0;
}
