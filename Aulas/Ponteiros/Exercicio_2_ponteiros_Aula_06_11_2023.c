//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variáveis aos ponteiros (use &). Modifique os
//valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.

#include<stdio.h>
#include<locale.h>

int main(){

    int a = 10;
    float b = 3.14;
    char c = 'E';
    int *aa;
    float *bb;
    char *cc;

        aa = &a;
        bb = &b;
        cc = &c;

        printf("Primeiros valores: %d, %.2f, %c.", *aa, *bb, *cc);

        *aa = 100;
        *bb = 1.19;
        *cc = 'M';

        printf("Segundos valores: %d, %.2f, %c.", *aa, *bb, *cc);



    return 0;
}