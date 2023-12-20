//Escreva uma função que aceite uma string (um ponteiro para caractere) e retorne o comprimento da string (número de caracteres). 
//Use a função para calcular e imprimir o comprimento de diferentes strings.

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

int LeitorPalavras (char *palavra){
    int cont;
    int i = 0;

    while (palavra[i] != '\0'){
        cont++;
        i++;
    }
    return cont;
}

int main(){

    char palavra[16];
    int tamanho;

    printf("Digite uma palavra:\n");
    scanf("%s", palavra);
    tamanho = LeitorPalavras(palavra);
    printf("O tamanho da palavra eh %d", tamanho); 

    return 0;
}