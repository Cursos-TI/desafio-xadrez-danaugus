//Desafio Peças Xadrez
#include <stdio.h>

//Recursivo torre
void movertorre (int casas) {
    if (casas > 0) {
        printf("Direita\n"); //Imprime a direção do movimento
        movertorre (casas -1);
    }  
}

//Recursivo bispo
void moverbispo (int casas){
    if (casas > 0) {
        for (int i = casas; i != 0; i--)
        {
            for (int j = 1; j > 0; j--)
            {
                printf("Direita, ");
            }
            printf("Cima\n");
        }        
        
    }
    
}

//Recursivo rainha
void moverrainha (int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverrainha (casas - 1);
    }

}

int main(){

    printf("##### MOVIMENTANDO AS PEÇAS DE XADREZ #####\n");
    //Mover a Torre 5 casas para a direita
    printf("\nMovimento da TORRE\n");
    movertorre(5);
        
    //Mover o bispo 5 casas diagonal cima direita
    printf("\nMovimento do BISPO\n");
    moverbispo(5);
        
    //Mover a rainha 8 casas esquerda
    printf("\nMovimento da RAINHA\n");
    moverrainha(8);
        
    //Mover o cavalo duas casas para baixo e uma a esquerda
    printf("\nMovimento do CAVALO\n");
    int vertical, horizontal;

    for (vertical = 2, horizontal = 1; vertical > 0; vertical --, horizontal --)
    {
        if (horizontal > 0)
        {
            printf("Direita\n");
        }        
        printf("Cima\n");     
        
    }  
   
    return 0;
}