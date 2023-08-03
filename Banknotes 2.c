#include <stdio.h>

int main() {
    int valor;
    int valorNota[] = {100, 50, 20, 10, 5, 2, 1};
    int size = 6;
    int quantNota = 0;
    int i;

    scanf("%d", &valor);
    printf("%d\n", valor);

    for(i = 0; i < size; i++){ //looping que percorre o vetor
        do {
            if(valor <= valorNota && valor > 0){

                valor = valor - valorNota[i];
                quantNota++;
            }
        } while (valor>valorNota[i]); //looping que repete a l�gica para cada vari�vel (nota)
        printf("%d notas(s) de R$ %d,00\n", quantNota, valorNota[i]);
    }


    return 0;
}
