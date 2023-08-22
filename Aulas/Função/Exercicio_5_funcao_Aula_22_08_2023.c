//Crie uma função que troque o valor de dois números inteiros passados por referência.
#include <stdio.h>
#include<locale.h>

void trocar (int *num1, int *num2){
    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

int main(){
    int n1, n2;

    printf("Escreva dois numero\n");
    scanf("%d %d", &n1, &n2);
    printf("Os numeros sao: %d e %d\n", n1, n2);
    trocar(&n1, &n2);
    printf("Os numeros trocados sao numero 1:\n%d\ne numero 2:\n%d\n", n1, n2);


}