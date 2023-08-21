//Leia uma matriz 4 x 4 e troque os valores da 1a linha pelos da 4a coluna, vice-e-
//versa. Escrever ao final a matriz obtida

#include <stdio.h>
#include<locale.h>

int main(){
    int n = 4;
    int matriz[n][n];

        for (int i = 0; i < n; i ++){
            for (int j = 0; j < n ; j++){
                matriz[i][j] = rand() % 20;
                printf("%4d", matriz[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < n; i ++){
            for (int j = 0; j < n; j++){
                matriz[0][j] = matriz[i][4];
                
            }
        }
}