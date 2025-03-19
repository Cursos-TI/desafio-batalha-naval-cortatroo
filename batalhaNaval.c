#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Nível Novato - Posicionamento dos Navios


#define LINHAS 3                                  //DEFININDO AS CONSTANTES QUE SERAO UTILIZADAS 
#define COLUNAS 3                                 //AO LONGO DO CÓDIGO
#define CONTEUDO 7

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

void mostrarPoderes(int tabuleiroPoder[10][10]) {       //FUNÇÃO QUE SERÁ UTILIZADA PARA EXIBIR O TABULEIRO

     printf("  A B C D E F G H I J\n");             //MOSTRANDO O A LINHA SUPERIOR DO TABULEIRO
    
     for (int i = 0; i < 10; i++) {                 //LOOP PARA PRINT O VALOR DE CADA LINHA/COLUNA
         printf("%d ", 0 + i);  
         
         for (int j = 0; j < 10; j++) {             //LOOP INTERNO, PEGANDO OS VALORES DOS INDICES DE i E j.
                 printf("%d ", tabuleiroPoder[i][j]);
         }
         printf("\n");
     }
 }


int main() {

    int tabuleiro[10][10] = {0};        //DECLARANDO A VARIAVEL TABULEIRO/MATRIZ 10X10 COM VALOR 0
    int tabuleiroPoder[10][10] = {0};   //DECLARANDO A VARIAVEL TABULEIRO/MATRIZ 10X10 COM VALOR 0 PARA APRESENTAR OS PODERES

    //INSERIR O BARCO NA HORIZONTAL
    
    for (int i = 0; i < LINHAS; i++) {       //DECLAREI i=0, A CONDIÇÃO PARA O LOOP, E O INCREMENTO.
        tabuleiro[2][1 + i] = 3;        //NO TABULEIRO, NA LINHA 2, COLUNA B INSERIR O VALOR 3,
    }                                   //NAS PROXIMAS DUAS EXECUÇÕES ADICIONA 1 NO INDICE DA COLUNA.

    
    //INSERIR O BARCO NA VERTICAL
    
    for (int i = 0; i < COLUNAS; i++) {       //DECLAREI i=0, A CONDIÇÃO PARA O LOOP, E O INCREMENTO.
        tabuleiro[5 + i][3] = 3;              //NO TABULEIRO, NA LINHA 5, COLUNA D INSERIR O VALOR 3,
    }                                         //NAS PROXIMAS DUAS EXECUÇÕES ADICIONA 1 NO INDICE DA LINHA.

    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    //INSERIR OS BARCOS NA DIAGONAL

    for (int i = 0; i < 1; i++)               //LOOP PARA INSERIR O BARCO NA DIAGONAL A PARTIR DA
    {                                         //LINHA DE INDICE 4 E COLUNA DE INDICE 5
        tabuleiro[4 + i][5] = 3;
        tabuleiro[5 + i][6] = 3;
        tabuleiro[6 + i][7] = 3;
    }
    
    for (int i = 0; i < 1; i++)               //LOOP PARA INSERIR O BARCO NA DIAGONAL A PARTIR DA
    {                                         //LINHA DE INDICE 0 E COLUNA DE INDICE 9
        tabuleiro[0][9 - i] = 3;
        tabuleiro[1][8 - i] = 3;
        tabuleiro[2][7 - i] = 3;
    }

    printf("**** NAVIOS DISPOSTOS NO TABULEIRO ****\n");
    printf("\n");

    mostrarTabuleiro(tabuleiro);
    printf("\n");


    //NIVEL MESTRE
    
    printf("******* PODERES NO TABULEIRO ***********\n");
    printf("\n");

    //INSERIR O PODER DE CONE
    
    for (int i = 0; i < 1; i++)
    {       
        tabuleiroPoder[0][3 + i] = CONTEUDO;   
        tabuleiroPoder[1][2 - i] = CONTEUDO;   
        tabuleiroPoder[1][3] = CONTEUDO;
        tabuleiroPoder[1][4 + i] = CONTEUDO;
        tabuleiroPoder[2][1 - i] = CONTEUDO;
        tabuleiroPoder[2][2 - i] = CONTEUDO;
        tabuleiroPoder[2][3] = CONTEUDO;
        tabuleiroPoder[2][4 + i] = CONTEUDO;
        tabuleiroPoder[2][5 + i] = CONTEUDO;
    }                                   

    //INSERIR O PODER DE CRUZ
    
    for (int i = 0; i < 1; i++)
    {       
        tabuleiroPoder[7][3 + i] = CONTEUDO;
        tabuleiroPoder[8][1 - i] = CONTEUDO;
        tabuleiroPoder[8][2 - i] = CONTEUDO;
        tabuleiroPoder[8][3] = CONTEUDO;
        tabuleiroPoder[8][4 + i] = CONTEUDO;
        tabuleiroPoder[8][5 + i] = CONTEUDO;
        tabuleiroPoder[9][3 + i] = CONTEUDO;
    }                                         

    //INSERIR O PODER OCTAEDRO

    for (int i = 0; i < 1; i++)               
    {                                         
        tabuleiroPoder[4][7 + i] = CONTEUDO;
        tabuleiroPoder[5][6 + i] = CONTEUDO;
        tabuleiroPoder[5][7] = CONTEUDO;
        tabuleiroPoder[5][8 + i] = CONTEUDO;
        tabuleiroPoder[6][7] = CONTEUDO;
    }
   
    
    mostrarPoderes(tabuleiroPoder);
  
    return 0;
}