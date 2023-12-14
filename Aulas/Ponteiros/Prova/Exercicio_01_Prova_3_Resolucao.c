#include <stdio.h>

void imprimir_vetor(int vetor[], int N){
    int *p = vetor;
    
    for(int i = 0; i < N; i++){
        printf("%d ", *(p + i));
    }
    
}
int main (){
    int vetor[5] = {1,2,3,4,5};
    imprimir_vetor(vetor, 5);


    return 0;
}