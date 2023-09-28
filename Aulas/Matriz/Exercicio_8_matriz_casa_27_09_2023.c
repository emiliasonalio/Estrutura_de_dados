//Leia uma matriz 5 x 5 e faça uma troca entre as diagonais superior e inferior. 

#include <stdio.h>
#include <locale.h>


int main (){
    setlocale(LC_ALL,"");

    int n = 5;
    int matriz[n][n];
    int troca = 0;

    // criando a matriz com números "aleatórios"
    for(int linha = 0; linha < n; linha++){
        for(int coluna = 0; coluna < n; coluna++){
            matriz[linha][coluna] = rand() % 100;
        printf("%5d", matriz[linha][coluna]);

        }
    printf("\n");
    }
    printf("\n");
    printf("\n");

    for(int linha = 0; linha < n; linha ++){
        for(int coluna = 0; coluna < n; coluna++){
            if (coluna > linha){
                troca = matriz[linha][coluna];
                matriz[linha][coluna] = matriz[coluna][linha];
                matriz[coluna][linha] = troca;
            }   
        }
    }
    for(int linha = 0; linha < n; linha ++){
        for(int coluna = 0; coluna < n; coluna++){
            printf("%5d", matriz[linha][coluna]);
        }
        printf("\n"); 
    }
}