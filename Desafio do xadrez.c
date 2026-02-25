#include <stdio.h>
   
    int main(){
                    //Definição de movimento de cada peca
        int movimentoTorre = 5, movimentoBispo = 5, movimentoRainha = 8;

        // Movimento da Torre(for)
        // Mover 5 casas para a direita.
        printf("Movimento da Torre:\n");
        for (int i = 1; i <= movimentoTorre; i++){
            printf("Direita\n");
        }
        printf("\n"); //pular uma linha para saber o proximo passo

        // Movimento do Bispo(while)
        // O Bispo move 5 casas na diagonal a direita(cima/direita)
        printf("Movimento do Bispo:\n");
        int b = 1;
        while (b <= movimentoBispo) {
            printf("Cima, direita\n");
            b++; //colocar sempre para acrescentar +1 e chegar ao valor definido de vezes
        } 
        printf("\n");

        // Movimento da Rainha(do_while)
        // A rainha move 8 casas para a esquerda
        printf("Movimento da Rainha:\n");
        int r =1;
        do{
            printf("Esquerda\n");
            r++;//colocar sempre para acrescentar +1 e chegar ao valor definido de vezes
        }while (r <= movimentoRainha);
        printf("\n");

        return 0;

    }