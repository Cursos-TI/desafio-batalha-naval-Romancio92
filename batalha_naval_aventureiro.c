#include <stdio.h>

#define linhas 10
#define colunas 10

    int main () {

        //declarando variáveis.
        int i, j;

        //declarando a matriz.    
        int tabuleiro [10][10] = {
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
            };
            
            //posicionar o navio 1 na matriz criada.
            for (i = 0; i < linhas; i++) {
                for (j = 3; j < 6; j++) {
                tabuleiro [0][j] = 3;
                };
            };

            //posicionar o navio 2 na matriz criada.
            for (i = 5; i < 8; i++) {
                for (j = 0; j < colunas; j++) {
                tabuleiro [i][7] = 3;
                };
            };

            //posicionar o navio 3 na diagonal principal.
            for (i = 0; i < linhas; i++) {
                for (j = 0; j < 3; j++) {
                    if (i == j) {
                    tabuleiro [i][j] = 3;
                    }
                };
            };

            //posicionar o navio 4 na diagonal secundária.
            for (i = 4; i < linhas; i++) {
                for (j = 5; j > 2; j--) {
                    if (i + j == 9) {
                    tabuleiro [i][j] = 3;
                    }
                };
            };
            //imprimindo o tabuleiro na tela.
            printf(" TABULEIRO DE BATALHA NAVAL \n");
            
            for (i = 0; i < linhas; i++) 
            {
                for (j = 0; j < colunas; j++) 
                {
                printf("%d  ", tabuleiro [i] [j]);
                };
            //criando um parágrafo entre uma linha e outra.    
            printf(" \n");
            }

        return 0;
    }