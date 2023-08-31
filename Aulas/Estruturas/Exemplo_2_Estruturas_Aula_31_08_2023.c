#include <stdio.h>
#include <string.h>

struct endereco{
    char rua[50];
    int numero;
};
struct pessoa{
    char nome[30];
    int idade;
    float peso;
    float altura;
    struct endereco end;
};

int main(){
    struct pessoa pessoas [3] = {
        {"Joao Silva", 30, 80, 1.7, {"Jucelino", 100}},
        {"Maria Rosa", 25, 50, 1.6, {"Marechal", 250}},
    };

    strcpy(pessoas[2].nome, "Lorenio Amarelo"); // copia a string da fonte para a destinação;
    pessoas[2].idade = 42;
    pessoas[2].peso = 75;
    pessoas[2].altura = 1.8;
    strcpy(pessoas[2].end.rua, "Manoel Ribas");
    pessoas[2].end.numero = 1230;

    for (int i = 0; i < 3; i++)
        printf("Nome: %s | Idade: %d | Peso: %.2f | Altura: %.2f\nRua: %s n %d \n\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].peso, pessoas[i].altura, 
        pessoas[i].end.rua, pessoas[i].end.numero);


        return 0;
}