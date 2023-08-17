//Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume.

#include <stdio.h>
#include<locale.h>

float volumeEsfera (float raio, float pi);

int main (){

    float raio;
    float pi = 3.14159;
    
    printf("Informe o valor do raio:");
    scanf("%f", &raio);
    printf("O Volume da esfera é %2f \n", volumeEsfera(raio, pi));
  

}

float volumeEsfera (float r, float pi){
        return (4*pi*r*r*r)/3;
    }