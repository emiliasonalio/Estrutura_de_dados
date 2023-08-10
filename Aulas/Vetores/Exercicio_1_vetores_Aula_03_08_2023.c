//Leia um vetor de 12 posições e em seguida ler também dois valores X e Y quaisquer correspondentes a duas posições no vetor.
//Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int vetor[12];
    int X, Y, soma;

        printf("Insira 12 valoras para o vetor:\n");
        for(int i = 0; i<12; i++){
            printf("[%d]:", i);
            scanf("%d", &vetor[i]);
        }

        printf("Digite duas posições do vetor[12]:\n");
        scanf("%d", &X);
        scanf("%d", &Y);

        if (X < 12 || Y < 12){
            printf("erro");
        }

        soma = vetor[X] + vetor[Y];

        printf("A soma das duas posicões %d e %d é: %d", X, Y, soma);
        

}