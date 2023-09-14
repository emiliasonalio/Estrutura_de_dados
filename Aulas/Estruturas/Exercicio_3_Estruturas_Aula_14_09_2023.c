#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct ponto{
    int x;
    int y;
};

int main(){
    float p;
    struct ponto pontoA;
    struct ponto pontoB;

    printf("Declare o primeiro ponto (X, Y) a ser achado a distancia:\n");
    scanf("%d%d", &pontoA.x, &pontoA.y);

    printf("Declare o segundo ponto (X, Y) a ser achado a distancia:\n");
    scanf("%d%d", &pontoB.x, &pontoB.y);

    p = sqrt(pow((pontoB.x-pontoA.x),2)+pow((pontoB.y-pontoA.y),2));

    printf("A distância entres os pontos eh: %f", p);

    return 0;
}