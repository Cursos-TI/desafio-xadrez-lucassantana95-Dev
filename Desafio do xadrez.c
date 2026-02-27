#include <stdio.h>

    void moverTorre(int casas){
        if (casas > 0){
        printf("Direita\n");
        
        moverTorre(casas - 1);
 }}

     void moverRainha(int casas){
        if (casas > 0){
        printf("Esquerda\n");
        
        moverRainha(casas - 1);
 }}

  void moverBispo(int casas){
     if (casas > 0){
        for (int i = 0; i < 1; i++){
        for (int j = 0; j < 1; j++)
        {
             printf("Cima,Direita\n");
        }}
         
        moverBispo(casas - 1);
 }
}
    int main(){
                    //Definição de movimento de cada peca
        int movimentoTorre = 5, movimentoBispo = 5, movimentoRainha = 8;

        // Movimento da Torre(for)
        // Mover 5 casas para a direita.
        printf("Movimento da Torre:\n");
            moverTorre(movimentoTorre);

            printf("\n");
            
        // Movimento do Bispo(while)
        // O Bispo move 5 casas na diagonal a direita(cima/direita)
        printf("Movimento do Bispo:\n");
            moverBispo(movimentoBispo);
        
        printf("\n");

        // Movimento da Rainha(do_while)
        // A rainha move 8 casas para a esquerda
        printf("Movimento da Rainha:\n");
            moverRainha(movimentoRainha);
      
        printf("\n");

        // Movimento do cavalo(loop aninhados)
        // Mover 2 para baixo uma para esquerda.
        printf("Movimento do cavalo:\n");
        for (int i = 1, j = 1; i <= 2; i++) {
        printf("Cima\n");
        
        // Quando atingir a 2ª casa para cima, faz a curva para a direita
        if (i == 2) {
            while (j <= 1) {
                printf("Direita\n");
                j++; // Incremento para sair do while
            }
        }
    }

        return 0;


    }