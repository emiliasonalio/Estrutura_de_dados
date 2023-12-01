// Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira. Use
// aritmética de ponteiros para acessar os caracteres das strings.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int LeitorPalavras(char *palavra)
{
    return strlen(palavra);
}
int comparar(char *str1, char *str2)
{
    int x = 20;
    int tam1, tam2;
    int cont = 0;
    tam1 = LeitorPalavras(str1);
    tam2 = LeitorPalavras(str2);
    char comp[x];

    if (tam1 >= tam2)
    {
        for (int i = 0; i < tam1; i++)
        {
            if (str2[0] == *str1)
            {
                for (int j = i; j < tam2; j++)
                {
                    if (*str1 == str2[j])
                    {
                        comp[j] = str1[j];
                        cont++;
                    }
                    if (tam2 == cont) {
                        return 1;
                    }
                    str1++;
                }
            }
            str1++;
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x = 20;
    char str1[x];
    char str2[x];

    printf("Escreva a primeira palavra:");
    scanf("%s", str1);
    printf("Escreva a segunda palavra:");
    scanf("%s", str2);

    int comparacao = comparar(str1, str2);
    if (comparacao == 0)
    {
        printf("A palvra 1 nao contem a palavra 2.");
    }
    else if (comparacao == 1)
    {
        printf("A palvra 1 contem a palavra 2.");
    }

    return 0;
}