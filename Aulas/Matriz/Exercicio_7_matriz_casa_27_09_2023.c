//Leia uma matriz 8 x 8 e a transforme numa matriz triangular inferior , atribuindo
//zero a todos os elementos acima da diagonal principal, escrevendo-a ao final.

#include <stdio.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL,"");

    int n = 8;
    int matriz[n][n];

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

    for(int linha = 0; linha < n; linha++){
        for(int coluna = 0; coluna < n; coluna++){
            if (linha > coluna) {
                matriz[linha][coluna] = 0;
            }
        printf("%5d", matriz[linha][coluna]);

        }
    printf("\n");
    }
}