#include <stdio.h>

void imprimir_vetor(int vetor[], int N){
    for(int *p = vetor; p < vetor + N; p++){
        printf("%d ", *p);
    }
    
}
int main (){
    int vetor[5] = {1,2,3,4,5};
    imprimir_vetor(vetor, 5);


    return 0;
}