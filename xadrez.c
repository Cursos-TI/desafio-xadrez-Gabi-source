#include <stdio.h>
int main() {
    // ====================================
    // Simulação do movimento da TORRE
    // Movimento: 5 casas para a Direita
    // Estrutura usada: FOR
    // ====================================
    int casasTorre = 5;
    printf("Movimento da Torre:\n");

    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Linha separadora para organização
    printf("\n");

    // ====================================
    // Simulação do movimento do BISPO
    // Movimento: 5 casas na diagonal (Cima Direita)
    // Estrutura usada: WHILE
    // ====================================
    int casasBispo = 5;
    int contadorBispo = 0;

    printf("Movimento do Bispo:\n");

    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Linha separadora para organização
    printf("\n");

    // ====================================
    // Simulação do movimento da RAINHA
    // Movimento: 8 casas para a Esquerda
    // Estrutura usada: DO-WHILE
    // ====================================
    int casasRainha = 8;
    int contadorRainha = 0;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;

Torre → for porque sabemos exatamente o número de repetições de antemão.

Bispo → while porque controlamos o contador até atingir o número desejado.

Rainha → do-while para garantir que pelo menos uma jogada seja impressa antes da verificação da condição.
