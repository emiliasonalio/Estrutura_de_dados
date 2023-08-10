//Leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior valor.

#include <stdio.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL,"");
    
    int numLinhas = 10;
    int numColunas = 10;
    int matriz[numLinhas][numColunas];
    int valor = 0;

    for(int linha = 0; linha < numLinhas; linha++){
        for(int coluna = 0; coluna < numColunas ; coluna++){
            matriz[linha][coluna] = rand() % 100;
            printf("%5d", matriz[linha][coluna]);
        }
    printf("\n");
    }

    int maior = matriz [0][0];
    int maior_linha = 0;
    int maior_coluna = 0;

        for(int linha = 0; linha < numLinhas; linha++)
            for(int coluna = 0; coluna < numColunas ; coluna++)
                if(matriz[linha][coluna] > maior){
                    maior = matriz[linha][coluna];
                    maior_linha = linha;
                    maior_coluna = coluna;
                }

    printf("\n\nMaior valor esta na posição [%d][%d]\n", maior_linha, maior_coluna);
            
        

    return 0; 
    }