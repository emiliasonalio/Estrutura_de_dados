/*Crie um programa que contenha um array de inteiros com cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
dobro de cada valor lido.*/
#include<stdio.h>
#include<locale.h>

int main(){
    int vetor[5] = {1, 2, 3, 4, 5};
    int *p = vetor;

    for(int i = 0; i < 5; i++){
        printf("%d", *p);
        p ++;
    }



    return 0;
}
