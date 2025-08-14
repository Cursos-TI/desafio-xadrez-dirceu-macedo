#include <stdio.h>

int main() {
    // ==========================
    // Declaração de variáveis constantes
    // ==========================
    const int casasTorre = 5;   // Torre vai andar 5 casas
    const int casasBispo = 5;   // Bispo vai andar 5 casas na diagonal
    const int casasRainha = 8;  // Rainha vai andar 8 casas

    // ==========================
    // Declaração de variáveis não constantes
    // ==========================
    int casasCavalo = 1;  // Cavalo vai andar 3 casas, mas em um único movimento apenas

    int i; // Variável de controle para os loops

    // ==========================
    // Movimento da TORRE (for)
    // ==========================
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // Torre anda apenas para a direita
    }

    printf("\n"); // Linha em branco para separar a saída

    // ==========================
    // Movimento do BISPO (while)
    // ==========================
    printf("Movimento do Bispo:\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n"); // Movimento diagonal completo
        i++;
    }

    printf("\n"); // Linha em branco para separar a saída

    // =============================
    // Movimento da RAINHA (do-while)
    // =============================
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n"); // Rainha anda para a esquerda
        i++;
    } while (i <= casasRainha);

    printf("\n"); // Linha em branco para separar a saída

    // ===============================================
    // Movimento do CAVALO (Loop aninhado while + for)
    // ===============================================
    printf("Movimento do Cavalo:\n");
    while (casasCavalo--)
    {
        for(int i = 0; i < 2; i++)
        {
            printf("Cima\n"); // Imprime "Cima" 2x
        }
        printf("Direita\n"); // Imprime "Direita" 1x
    }
    

    return 0;
}