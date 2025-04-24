#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    //movimentação da torre
    printf("movimentação da torre, 5 para direita:\n");

    for (int T = 0; T < 5; T++)
    {
        printf("direita.\n");
    }
    
    //movimentação a rainha
    printf("\nmovimentação da rainha, 7 para a esquerda:\n");

int R = 0;
    do
    {
        printf("esquerda\n");
        R++;
    } while (R < 7);
    
    //movimentação bispo
    printf("\nmovimentação do bispo, 3 diagonal cima direita:\n");

int B = 0;
    while (B < 3)
    {
        printf("cima, direita\n");
        B++;
    }
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
