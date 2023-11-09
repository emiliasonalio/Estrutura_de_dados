//Escreva uma função que aceite uma string (um ponteiro para caractere) e retorne o comprimento da string (número de caracteres). 
//Use a função para calcular e imprimir o comprimento de diferentes strings.

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

int LeitorPalavras (char *palavra){
    int tamanho;
    scanf("%c", &palavra);
    //printf("O tamanho da palavra é %zu", strlen(palavra)); //%zu formato especifico para printar strlen()
    tamanho = strlen(palavra);
    printf("O tamanho da palavra eh");    
    return tamanho;
}

int main(){

    char lerPalavra;

    printf("Digite uma palavra:\n");
    scanf("%c", &lerPalavra);
    LeitorPalavras(lerPalavra);

    return 0;
}