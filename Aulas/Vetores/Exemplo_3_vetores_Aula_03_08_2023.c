//Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos e vice-e-versa. Escreva ao final o vetor obtido.
#include <stdio.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL,"");

    int tamanho = 16;
    int vetor [tamanho];

    for(int i = 0; i < tamanho; i++){
        vetor[i] = i + 1;
        printf("[%d]", vetor[i]);
    }

    for(int i = 0; i < tamanho / 2; i++){
        int aux = vetor [i];
        vetor[i] = vetor [tamanho - 1 -i];
        vetor [tamanho - 1 -i] = aux;
    }
    printf("\nVetor invertido\n");
    for(int i = 0; i < tamanho; i++){
        printf("[%d]", vetor[i]);
    }


    return 0;
}