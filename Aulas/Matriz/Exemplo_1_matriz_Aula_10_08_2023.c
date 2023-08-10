#include <stdio.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL,"");
        int matriz [5][5] = {
            {0,1,2,3,4},
            {5,6,7,8,9},
            {10,11,12,13,14},
            {15,16,17,18,19},
            {20,21,22,23,24}
        }; //atribuindo valores à matriz

        for(int linha = 0; linha <5; linha++){
            for(int coluna = 0; coluna < 5; coluna++ ){
                printf("%4d", matriz[linha][coluna]); // %4d irá fazer o número ocupar 4 espaços obrigatóriamente
            }
        printf("\n");
        }
    return 0;
}