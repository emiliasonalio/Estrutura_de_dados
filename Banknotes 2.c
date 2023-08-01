#include <stdio.h>

int main() {
    int valor;
    int valorNota[] = {100, 50, 20, 10, 5, 2, 1};
    int size = 6;
    int quantNota = 0;
    int i;

    scanf("%d", &valor);
    printf("%d\n", valor);

    for(i = 0; i < size; i++); //looping que percorre o vetor
        do {
            if(valor <= valorNota && valor > 0){

                valor = valor - valorNota[i];
                quantNota++;
            }
        } while (valor<valorNota); //looping que repete a lógica para cada variável (nota)


        printf("%d notas(s) de R$ %d,00", quantNota, valorNota[i]);

    return 0;
}
