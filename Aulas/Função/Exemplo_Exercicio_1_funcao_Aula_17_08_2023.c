//Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume.

#include <stdio.h>
#include<locale.h>
#include<math.h>

float volumeEsfera (float raio);

int main (){

    float raio;
    
    
    printf("Informe o valor do raio:");
    scanf("%f", &raio);


    printf("O Volume da esfera é %2f \n", volumeEsfera(raio));
  

}

float volumeEsfera (float r){
        return (4* M_PI * pow(r,3))/3;
    }