//Declare um vetor de 10 posições e o preencha com os 10 primeiros números impares e o escreva.

#include <stdio.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL,"");

    int tamanho = 10;
    int vetor[tamanho];

    int numero = 0;
    int cont = 0;
    do{
        printf("Digite o número [%d]:", cont);
        scanf("%d", &numero);

        if(numero % 2 == 1){
            vetor[cont] = numero;
            cont ++;
        }
    } while(cont < tamanho);

    for (int i = 0; i < tamanho; i++)
        printf("[%d]", vetor[i]);
    printf("\n");

    return 0;
}
