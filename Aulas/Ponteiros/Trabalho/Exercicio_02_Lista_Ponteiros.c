//Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira. Use
//aritmética de ponteiros para acessar os caracteres das strings.

// PROBLEMA: LENDO LIXO NO PRINTF
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

int LeitorPalavras (char *palavra){
    return strlen(palavra);
}
int comparar (char *str1, char *str2){
    
    int x = 20;
    int tam1, tam2;
    tam1 = LeitorPalavras(str1);
    tam2 = LeitorPalavras(str2);
    printf("%d\n", tam1);
    printf("%d\n", tam2);
    char comp[x];
       
    if(tam1 < tam2){
        return 0;
    }
    else if(tam1 > tam2){

        for(int i = 0; i< tam1 ; i++){
            if(str1[i] == str2[i]){
                comp[i] = str1[i];
           }
        }
        printf("A palavra eh %s", comp);
    }
    else {
        return 0;
    }
    
    return 1;
}

int main(){
int x = 20;
char str1[x];
char str2[x];


    printf("Escreva a primeira palavra:");
    scanf("%s", str1);
    printf("Escreva a segunda palavra:");
    scanf("%s", str2);

    comparar(str1, str2);



    return 0;
}