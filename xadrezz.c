#include <stdio.h>

int main() {
    // Declaração de variáveis
    int torre, bispo = 5, rainha = 8;

    printf("---- DESAFIO DO XADREZ ----\n");
    printf("---- Movimentação a Torre ----\n");

    // Movimentação da Torre
    for(torre = 5; torre >= 1; torre--) { 
        printf("DIREITA \n");
    }

    printf("---- Movimentação do Bispo ----\n");

    do // Movimentação do Bispo
    {
       printf("Cima , Dereita \n");
       bispo--;
    } while (bispo >= 1);
     
    
    // Movimentação da Rainha
    printf("---- Movimentação da Rainha ----\n");
    while(rainha >= 1) {
        printf("ESQUERDA \n");
        rainha--;
    }


    // Modo Aventureiro
   printf("---- Movimento do Cavalo ----\n");
    int movimentoCompleto = 1;

    while (movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++) {
            printf("CIMA\n"); // Pra cima duas vezess
        }
        printf("DIREITA\n"); // Para direita uma vez
        
    }
   

    return 0;
}