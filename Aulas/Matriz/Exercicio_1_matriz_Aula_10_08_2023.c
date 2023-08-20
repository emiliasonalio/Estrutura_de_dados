//Leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior valor.

#include <stdio.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL,"");
    
    int linha = 3;
    int coluna = 3;
    int matriz[linha][coluna];
    int valor = 0;
    int maiorValor = 0;
    int l, c;

    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3 ; coluna++){
            printf("Digite os valores da matriz:\n");
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3 ; coluna++){

            if (matriz[linha][coluna] > maiorValor){

                maiorValor = matriz[linha][coluna];
                
                l = linha;
                c = coluna;

            }
        }
    }
    printf("A posicao do maior valor e matriz[%d][%d]", l, c);

    return 0;
}