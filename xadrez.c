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

}
