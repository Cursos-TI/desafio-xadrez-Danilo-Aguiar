#include <stdio.h>

/*
   FUNÇÕES RECURSIVAS
*/

/* Torre: movimento recursivo para a direita */
void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}

/* Rainha: movimento recursivo para a esquerda */
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/* Bispo: recursividade + loops aninhados
   Loop externo: vertical (Cima)
   Loop interno: horizontal (Direita) */
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    /* Loop vertical (externo) */
    for (int vertical = 1; vertical <= 1; vertical++) {

        /* Loop horizontal (interno) */
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

/* 
   PROGRAMA PRINCIPAL
   */
int main() {

    /* Quantidade de casas (definidas no código) */
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    /* 
       TORRE (RECURSIVIDADE)
        */
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    /*
       BISPO (RECURSIVIDADE + LOOPS ANINHADOS)
      */
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\n");

    /* 
       RAINHA (RECURSIVIDADE)
        */
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    /* 
       CAVALO (LOOPS COMPLEXOS)
       Movimento em "L":
       - 2 casas para cima
       - 1 casa para a direita
        */

    printf("Movimento do Cavalo:\n");

    int movimentoVertical = 2;
    int movimentoHorizontal = 1;

    /* Loop externo controla o eixo vertical */
    for (int i = 1; i <= movimentoVertical; i++) {

        /* Condição extra apenas para controle de fluxo */
        if (i > movimentoVertical) {
            break;
        }

        printf("Cima\n");

        /* Loop interno só executa após o último movimento vertical */
        for (int j = 1; j <= movimentoHorizontal; j++) {

            if (i < movimentoVertical) {
                continue; /* Só permite o movimento horizontal no final */
            }

            printf("Direita\n");
        }
    }

    return 0;
}
