//Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

#include <stdio.h>
#include<locale.h>
//RESOLUÇÃO DO PROFS
int main(int argc, char constant *argv[]){

    int a = 10;
    int b = 20;

    printf("A %p \n B %p\n", &a, &b);

    if(&a > &b)
        printf("%p\n", &a);
    else
        printf("%p\n", &b);
    
    return 0;
}



//MINHA RESOLUÇÃO
/*int main (){
    int *var1;
    int *var2;

        if(var1 > var2){
            printf("O maior endereco eh a variavel 1: %p", var1);
        }
        else{
            printf("O maior endereco eh a variavel 2: %p", var2);
        }

    return 0;
}*/