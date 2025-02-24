#include <stdio.h>

// Emplementação do mestre!

// TORRE
void movertorre(int casas) {
  if (casas > 0) {
    printf("DIREITA\n");
    movertorre(casas - 1);
  }
}

// BISPO
void irDireita(int x, int y, int passos) {
  if (passos > 0) {
    printf("CIMA , DIREITA\n");
    irDireita(x + 1, y, passos - 1);
  }
}

// Função recursiva para ir para cima
void irCima(int x, int y, int passos) {
  if (passos > 0) {
   // printf("CIMA");
    irCima(x, y + 1, passos - 1);
  }
}

// Rainha
void moverrainha(int rainha) {
  if (rainha > 0) {
    printf("ESQUERDA \n");
    moverrainha(rainha - 1);
  }
}

int main() {
  printf("---- DESAFIO DO XADREZ ----\n");

  printf("---- Movimentação a Torre ----\n");
  movertorre(5);
  printf("\n");

  printf("---- Movimentação Bispo ----\n");
  int x = 0; // Posição inicial x
  int y = 0; // Posição inicial y
  int passos = 5; // Número de passos a dar

  for (int i = 0; i < passos; i++) {
    irDireita(x, y, 1);
    irCima(x, y, 1);
    x++;
    y++;
  }
  printf("\n");

  printf("---- Movimentação da Rainha ----\n");
  moverrainha(8);
  printf("\n");

  printf("---- Movimentação do Cavalo ----\n");
  int passoCima = 2; // Número de passos para cima
  int passoDireita = 1; // Número de passos para a direita

  for (int i = 0; i < passoCima; i++) {
    for (int j = 0; j < passoDireita; j++) {
      printf("CIMA , DIREITA\n");
    }
  //  printf("CIMA\n");
  }

  return 0;
}


