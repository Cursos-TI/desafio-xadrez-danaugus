//Desafio Peças Xadrez
#include <stdio.h>

int main(){

    printf("##### MOVIMENTANDO AS PEÇAS DE XADREZ #####\n");
    //Mover a Torre 5 casas para a direita
    printf("\nMovimento da TORRE\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");//Imprime a direção do movimento
    }
    
    //Mover o bispo 5 casas diagonal cima direita
    printf("\nMovimento do BISPO\n");
    int b = 0;
    do
    {
        printf("Cima, Direita\n");//Imprime a direção do movimento
        b++;
    } while (b < 5);

    //Mover a rainha 8 casas esquerda
    printf("\nMovimento da RAINHA\n");
    int r = 0;
    while (r < 8)
    {
        printf("Esquerda\n");
        r ++;
    }
    
    
    return 0;
}