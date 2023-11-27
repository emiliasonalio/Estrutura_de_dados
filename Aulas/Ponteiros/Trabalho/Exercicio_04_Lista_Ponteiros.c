//Escreva uma função que aceite um vetor de inteiros e seu tamanho
//como argumentos e retorne o valor máximo e mínimo no vetor
//usando ponteiros. Teste a função com diferentes vetores.

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

int MaxMin (int i, int vetor[]){
    int *max = 0;
    
    for (int a = 0; a < i; a++){
        if (vetor[a] > *max){
            *max = &vetor[a];
        }
    }
    printf("O maior valor é: %d", *max);

    int **min = &max; 

    for (int a = 0; a < i; a++){
        if (vetor[a] < **min){
            **min = &vetor[a];
        }
    }
    printf("O maior valor é: %d", *min);

}
int main(){

    int i;
    
    printf("Informe o tamanho do vetor:\n");
    scanf("%d", &i);

    int vetor[i];
    printf("Informe o vetor:\n");
        for(int a = 0; a <= i; a++){
            scanf("%d", &vetor[a]);
        }
    
    MaxMin(i, vetor);

    return 0;
}