/*Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter um ponto superior esquerdo e o ponto inferior direito do retângulo.
Cada ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia uma estrutura
Retângulo e exiba a área e o comprimento da diagonal e o perímetro desse retângulo.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct ponto{
    int x;
    int y;
};

struct retangulo{
    struct ponto A;
    struct ponto B;

};

int area (int lado, int h){
    int a = lado* h;
    return a;
}

int diagonal (int lado, int h){
    int d = sqrt(pow((lado),2))+ pow((h),2);
    return d;
}
int perimetro (int lado, int h){
    int p = 2 * lado + 2 * h;
    return p;
}

int main(){
    struct ponto pontoA;
    struct ponto pontoB;
    struct retangulo;
    int base, altura;

    printf("Declare o primeiro ponto do Retângulo:");
    scanf("%d%d", &pontoA.x, &pontoA.y);
    printf("Declare o segundo ponto do Retângulo:");
    scanf("%d%d", &pontoB.x, &pontoB.y);

    altura = abs(pontoB.y - pontoA.y);
    base = abs(pontoB.x - pontoA.x);

    int A = area(base, altura);
    printf("A area e: %d", A);

    int D = diagonal(base, altura);
    printf("A diagonal e: %d", D);

    int P = perimetro(base, altura);
    printf("O perimetro e: %d", P);

    return 0;
}
