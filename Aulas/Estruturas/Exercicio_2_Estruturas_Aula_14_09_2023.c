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
    struct ponto pontos;
    printf("Declare um ponto (X, Y) a ser achado a distancia:\n");
    scanf("%d%d", &pontos.x, &pontos.y);

    p = sqrt(pow((0-pontos.x),2)+pow((0-pontos.y),2));

    printf("A distância do ponto até a origem (0, 0) eh: %f", p);

    return 0;
}