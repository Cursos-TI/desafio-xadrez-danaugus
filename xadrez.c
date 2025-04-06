#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

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
        printf("Esquerda\n");//Imprime a direção do movimento
        r ++;
    }

    //Mover o cavalo duas casas para baixo e uma a esquerda
    printf("\nMovimento do CAVALO\n");
    int c = 0;
    for (int i = 0; i < 1; i++)
    {
        do
        {
            printf("Baixo\n");//Imprime a direção do movimento
            c++;
        } while (c < 2);
        printf("Esquerda\n");//Imprime a direção do movimento
    }
    
  
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
