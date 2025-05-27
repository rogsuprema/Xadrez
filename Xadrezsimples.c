#include <stdio.h>

int main() {
    // -------------------------------
    // Movimento da TORRE (5 casas para a direita)
    // Estrutura de repetição: FOR
    // -------------------------------

    printf("Movimento da Torre:\n");

    // Simula a torre se movendo 5 casas para a direita
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // -------------------------------
    // Movimento do BISPO (5 casas na diagonal para cima e à direita)
    // Estrutura de repetição: WHILE
    // -------------------------------

    printf("Movimento do Bispo:\n");

    int j = 1;
    // Simula o bispo se movendo 5 casas na diagonal (cima + direita)
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // -------------------------------
    // Movimento da RAINHA (8 casas para a esquerda)
    // Estrutura de repetição: DO-WHILE
    // -------------------------------

    printf("Movimento da Rainha:\n");

    int k = 1;
    // Simula a rainha se movendo 8 casas para a esquerda
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    printf("\n");

    return 0;
}
