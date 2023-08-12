//Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.
#include <stdio.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL,"");

    int linha = 5;
    int coluna = 5;
    int matriz[linha][coluna];

    // preencher matriz
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            if(i == j)
                matriz[i][j] = 1;

            else
                matriz[i][j] = 0;
        }
    }

    //imprimir a matriz
     for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
     }

return 0;
}

