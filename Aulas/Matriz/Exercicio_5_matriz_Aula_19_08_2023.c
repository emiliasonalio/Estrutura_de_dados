//Leia uma matriz 20 x 20. Leia também um valor X. O programa deverá fazer uma
//busca desse valor na matriz e, ao final escrever a localização (linha e coluna) ou
//uma mensagem de “não encontrado”.
#include <stdio.h>
#include<locale.h>

int main(){

    int linha = 3;
    int coluna = 3;
    int matriz[linha][coluna];
    int X;
    int l = -1;
    int c = -1;

        for(int i = 0; i < linha; i ++){
            for(int j = 0; j < coluna; j++ ){

                printf("Preencha a matriz:\n");
                scanf("%d", &matriz[i][j]);

            }
        }

        printf("Atribua um valor para X:\n");
        scanf("%d", &X);

        for(int i = 0; i < linha; i ++){
            for(int j = 0; j < coluna; j++ ){
                if (X == matriz[i][j]){

                    l = i;
                    c = j;
                }

            }
        }
        if(l != -1 && c != -1){
            printf("\n");
            printf("O valor de X esta na posicao matriz[%d][%d]", l, c);
        }        
        else {
            printf("X nao pertence a matriz\n");
        }




return 0; 
 }