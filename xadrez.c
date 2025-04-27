#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//fiz o codigo contar a quantidade e escrever a cada loop até acabar

int main() {
    // Nível Novato - Movimentação das Peças
    
    
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

    return 0;
}
