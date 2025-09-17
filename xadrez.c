#include <stdio.h>

int main() {
    int i; // variável de controle para os loops

    // *** Torre ***
    // Movimenta 5 casas para a direita usando FOR
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // *** Bispo ***
    // Movimenta-se 5 casas na diagonal (Cima e Direita) usando WHILE
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    // *** Rainha ***
    // Movimenta-se 8 casas para a esquerda usando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    return 0;
}