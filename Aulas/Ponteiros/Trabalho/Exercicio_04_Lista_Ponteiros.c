// Escreva uma função que aceite um vetor de inteiros e seu tamanho
// como argumentos e retorne o valor máximo e mínimo no vetor
// usando ponteiros. Teste a função com diferentes vetores.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int MaxMin(int tam, int vetor[], int *max, int *min) {
    *max = vetor[0];
    *min = vetor[0];

    for (int i = 0; i < tam; i++) {
        if (vetor[i] > *max) {
            *max = vetor[i];
        }
        if (vetor[i] < *min) {
            *min = vetor[i];
        }
    }
}

int main() {

    int tam;

    printf("Informe o tamanho do vetor:\n");
    scanf("%d", &tam);

    int vetor[tam];
    printf("Informe o vetor:\n");
    for (int a = 0; a < tam; a++) {
        scanf("%d", &vetor[a]);
    }

    int max = 0;
    int min = 0;

    MaxMin(tam, vetor, &max, &min);
    printf("Os valores maximo e minimo sao %d, %d\n", max, min);


    return 0;
}