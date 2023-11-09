//Escreva uma função que aceite uma string (um ponteiro para caractere) e retorne o comprimento da string (número de caracteres). 
//Use a função para calcular e imprimir o comprimento de diferentes strings.

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

int LeitorPalavras (char *palavra){
    
    int i;
    char tamanho[i];
    scanf("%c", &palavra);
    tamanho [i] = *palavra;
    
    printf("O tamanho da palavra eh");    
    return i;
}

int main(){

    char lerPalavra;

    printf("Digite uma palavra:\n");
    scanf("%c", &lerPalavra);
    LeitorPalavras(lerPalavra);

    return 0;