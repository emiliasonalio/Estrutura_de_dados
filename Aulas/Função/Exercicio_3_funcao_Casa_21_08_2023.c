//Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o
//valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário.

#include <stdio.h>
#include<locale.h>
#include <stdbool.h>

int primo(int v1);

int main(){

int valor1;

    printf("Digite um valor:\n");
    scanf("%d", &valor1);

    if(primo(valor1)){
        printf("E um numero primo");
    }
    else{
        printf("Nao e um numero primo");
    }

    return 0;
    }

int primo(int v1){
    if(v1 <= 1)
        return false;
    
    for(int i = 2; i < v1; i ++)
        if (v1 % i == 0)
            return false;
    
    return true;
}