//Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores elementos das respectivas posições das primeiras matrizes.
#include <stdio.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL,"");

int tamanho = 4;
int matriz1[tamanho][tamanho];
int matriz2[tamanho][tamanho];
int matriz3[tamanho][tamanho];

// preencher a matriz1
for(int linha = 0; linha < tamanho; linha++){
        for(int coluna = 0; coluna < tamanho ; coluna++){
            matriz1[linha][coluna] = rand() % 100;

            //srabd(1); comando para gerar números "aleatórios", coloca-se um número entre parenteses que é a semente

            printf("%5d", matriz1[linha][coluna]);
        }
    printf("\n");
}

printf("\n");

// preencher a matriz2
for(int linha = 0; linha < tamanho; linha++){
        for(int coluna = 0; coluna < tamanho ; coluna++){
            matriz2[linha][coluna] = rand() % 100; //gera números aleatórios

            printf("%5d", matriz2[linha][coluna]);
        }
    printf("\n");
}
printf("\n");

    // percorrer matriz1 e matriz2 e achar quais números são maiores e atribuir a matriz3
        for(int linha = 0; linha < tamanho; linha++) // o for percorre qualquer matriz, não uma específica
            for(int coluna = 0; coluna < tamanho ; coluna++)

                if(matriz1[linha][coluna] > matriz2[linha][coluna]){ //condição para atribuir a matriz3 se o maior valor for da matriz1
                    matriz3[linha][coluna] = matriz1[linha][coluna];
                }
                else{ //condição para atribuir a matriz3 se o maior valor for da matriz2
                    matriz3[linha][coluna] = matriz2[linha][coluna];
                }

        for(int linha = 0; linha < tamanho; linha++){ 
            for(int coluna = 0; coluna < tamanho ; coluna++){

            printf("%5d", matriz3[linha][coluna]);
            }
            printf("\n");          
        }
         

    return 0; 
    }
