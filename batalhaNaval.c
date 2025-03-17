#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Nível Novato - Posicionamento dos Navios

void mostrarTabuleiro(int tabuleiro[10][10]) {       //FUNÇÃO QUE SERÁ UTILIZADA PARA EXIBIR O TABULEIRO

     printf("  A B C D E F G H I J\n");             //MOSTRANDO O A LINHA SUPERIOR DO TABULEIRO
    
     for (int i = 0; i < 10; i++) {                 //LOOP PARA PRINT O VALOR DE CADA LINHA/COLUNA
         printf("%d ", 0 + i);  
         
         for (int j = 0; j < 10; j++) {             //LOOP INTERNO, PEGANDO OS VALORES DOS INDICES DE i E j.
             printf("%d ", tabuleiro[i][j]);
         }
         printf("\n");
     }
 }


int main() {

    int tabuleiro[10][10] = {0};        //DECLARANDO A VARIAVEL TABULEIRO/MATRIZ 10X10 COM VALOR 0


    //INSERIR O BARCO NA HORIZONTAL
    
    for (int i = 0; i < 3; i++) {       //DECLAREI i=0, A CONDIÇÃO PARA O LOOP, E O INCREMENTO.
        tabuleiro[2][1 + i] = 3;        //NO TABULEIRO, NA LINHA 2, COLUNA B INSERIR O VALOR 3,
    }                                   //NAS PROXIMAS DUAS EXECUÇÕES ADICIONA 1 NO INDICE DA COLUNA.

    
    //INSERIR O BARCO NA VERTICAL
    
    for (int i = 0; i < 3; i++) {       //DECLAREI i=0, A CONDIÇÃO PARA O LOOP, E O INCREMENTO.
        tabuleiro[5 + i][3] = 3;        //NO TABULEIRO, NA LINHA 5, COLUNA D INSERIR O VALOR 3,
    }                                   //NAS PROXIMAS DUAS EXECUÇÕES ADICIONA 1 NO INDICE DA LINHA.


    mostrarTabuleiro(tabuleiro);

    return 0;
}

// Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0