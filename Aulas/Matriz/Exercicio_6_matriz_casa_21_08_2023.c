//Leia uma matriz 4 x 4 e troque os valores da 1a linha pelos da 4a coluna, vice-e-
//versa. Escrever ao final a matriz obtida

#include <stdio.h>
#include<locale.h>

int main(){
    int n = 4;
    int matriz[n][n];

        for (int i = 0; i < n; i ++){
            for (int j = 0; j < n ; j++){
                matriz[i][j] = rand() % 100;
                printf("%4d", matriz[i][j]);
            }
            printf("\n");
        }
printf("\n\n");

            for (int j = 0; j < n; j++){
                int aux = matriz[0][j];
                matriz[0][j] = matriz[j][n-1];
                matriz[j][n-1] = aux;
            }
        printf("Matriz modificada:\n");
        for (int i = 0; i < n; i ++){
            for (int j = 0; j < n ; j++){
                printf("%4d", matriz[i][j]);
            }
        printf("\n");
        }

        return 0;
        }