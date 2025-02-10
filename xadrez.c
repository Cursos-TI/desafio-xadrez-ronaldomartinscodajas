#include <stdio.h>

// Função recursiva para movimentar o Bispo
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Cima Direita\n");
    moverBispo(passos - 1);
}

// Função recursiva para movimentar a Torre
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função para movimentar o Cavalo em L usando loops aninhados
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    int j = 0;
    while (j < 1) {
        printf("Esquerda\n");
        j++;
    }
}

int main() {
    printf("Movimentação do Bispo:\n");
    moverBispo(5);
    
    printf("\nMovimentação da Torre:\n");
    moverTorre(5);
    
    printf("\nMovimentação da Rainha:\n");
    moverRainha(8);
    
    printf("\nMovimentação do Cavalo:\n");
    moverCavalo();
    
    return 0;
}