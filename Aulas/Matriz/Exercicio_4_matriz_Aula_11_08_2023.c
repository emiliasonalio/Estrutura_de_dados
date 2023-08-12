// Leia uma matriz 6 x 6, conte e escreva quantos valores maiores que 10 ela possui.
#include <stdio.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL,"");

    int n = 6;
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
    int cont;
    
    for(int linha = 0; linha < n; linha++){
        for(int coluna = 0; coluna < n; coluna++){
            if (matriz[linha][coluna] > 10){
                printf("[%2d]", matriz[linha][coluna]);
                cont ++; //contando o número de vezes em que um valor maior que dez aparece
            }
            else{
                printf("[  ]");
            }
        }
        printf("\n");
    }
    
    printf("O número de valores maiores que 10 é: %d", cont);

return 0;
}
