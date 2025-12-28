#include<stdio.h>

// Torres

int main(){
    int movimentoTorre = 5;
    int i = 1;

    printf("Torre\n");
    printf("\n");
    for(i; i <= movimentoTorre; i++){
       printf("Direita\n");
    }

    printf("\n");


    // Bispo

    int movimentoBispo = 5;
    int ib = 1;


    printf("Bispo\n");
    printf("\n");
    while(movimentoBispo >= ib){
        printf("Cima, Direita\n");
        ib++;
    }

    printf("\n");

    int movimentoRainha = 8;
    int ir = 1;

    // Rainha

    printf("Rainha\n");
    printf("\n");

    do{
        printf("Esquerda\n");
        ir++;
    }while(movimentoRainha >= ir);

    printf("\n");

    // Cavalo

    printf("Cavalo\n");
    printf("\n");
    int casasBaixo = 2;
    int casasEsquerda = 1;

    for (int etapa = 1; etapa <= 2; etapa++) {

        /* Primeira etapa: duas casas para baixo */
        if (etapa == 1) {
            for (int i = 1; i <= casasBaixo; i++) {
                printf("Baixo\n");
            }
        }

        /* Segunda etapa: uma casa para a esquerda */
        if (etapa == 2) {
            for (int i = 1; i <= casasEsquerda; i++) {
                printf("Esquerda\n");
            }
        }
    }

    return 0;
}
