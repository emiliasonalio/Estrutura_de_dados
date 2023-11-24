//Declare um vetor de inteiros e um ponteiro que aponte para o 
//primeiro elemento do vetor. Use o ponteiro para percorrer o vetor
//e imprimir seus elementos.

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

int main(){

int vetor[5] = {1, 2, 3, 4, 5};
int *p;

    p = &vetor[0];
    printf("O primeiro elemento do vetor e %d\n", *p);

    printf("O vetor e:\n");    
    for(int i = 0; i < 5; i++){
        printf("[%d]", *p++);
    }


}