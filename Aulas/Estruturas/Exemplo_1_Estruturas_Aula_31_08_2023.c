#include <stdio.h>
#include <string.h>

int main(){
    struct pessoa{
        char nome[30];
        int idade;
        float peso;
        float altura;
    };
    struct pessoa pessoa1;
    fgets(pessoa1.nome, 30, stdin);//fgets (file get string) lê o nome completo com os espaços e tudo, pessoa1.nome, 30 (numero de espaços do vetor), stdin - info sai do teclado;
    scanf("%d%f%f", &pessoa1.idade, &pessoa1.peso, &pessoa1.altura);

    printf("Nome: %s\nIdade: %d\nPeso: %.2f\nAltura: %.2f\n", pessoa1.nome, pessoa1.idade, pessoa1.peso, pessoa1.altura);
    return 0;

}