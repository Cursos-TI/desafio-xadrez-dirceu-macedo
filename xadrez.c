#include <stdio.h>

int main() {
    // ==========================
    // Declaração de variáveis constantes
    // ==========================
    // Cada constante representa o número de casas que a peça vai se mover.
    const int casasTorre = 5;   // Torre vai andar 5 casas
    const int casasBispo = 5;   // Bispo vai andar 5 casas na diagonal
    const int casasRainha = 8;  // Rainha vai andar 8 casas

    int i; // Variável de controle para os loops

    // ==========================
    // Movimento da TORRE (for)
    // ==========================
    printf("Movimento da Torre:\n");
    // O 'for' é ideal quando sabemos exatamente quantas repetições vamos fazer.
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // Torre anda apenas para a direita neste exemplo
    }

    printf("\n"); // Linha em branco para separar a saída

    // ==========================
    // Movimento do BISPO (while)
    // ==========================
    printf("Movimento do Bispo:\n");
    i = 1; // Reiniciando o contador para usar no while

    // O 'while' é útil quando queremos repetir algo enquanto uma condição for verdadeira.
    while (i <= casasBispo) {
        // Movimento do bispo é sempre em diagonal
        // Isso significa que ele se move vertical e horizontalmente ao mesmo tempo
        printf("Cima\n");    // Primeiro o movimento vertical
        printf("Direita\n"); // Depois o movimento horizontal
        i++; // Avançamos para a próxima casa
    }

    printf("\n"); // Linha em branco para separar a saída

    // ==========================
    // Movimento da RAINHA (do-while)
    // ==========================
    printf("Movimento da Rainha:\n");
    i = 1; // Reiniciando o contador para o do-while

    // O 'do-while' executa pelo menos uma vez, mesmo que a condição seja falsa depois.
    do {
        printf("Esquerda\n"); // Rainha anda para a esquerda neste exemplo
        i++; // Avança para a próxima casa
    } while (i <= casasRainha); // Continua enquanto não atingir o limite

    return 0; // Fim do programa
}
