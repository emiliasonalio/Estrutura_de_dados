//Faça um procedimento que recebe por parâmetro os valores necessário para o
//cálculo da fórmula de Bhaskara e apresenta os resultados, caso seja possível
//calcular.
#include <stdio.h>
#include<locale.h>
#include<math.h>

int bhaskara1 (int a, int b, int c){
    if((pow(b, 2) - 4*a*c) >= 0){
        return (-(b) + sqrt(pow(b, 2) - 4*a*c) )/ 2*a;
    }
    else{
        printf("Raizes fora do grupo dos Reaisn\n");
    }
}
int bhaskara2 (int a, int b, int c){
    if((pow(b, 2) - 4*a*c) >= 0){
        return (-(b) - sqrt(pow(b, 2) - 4*a*c) )/ 2*a;
    }
    else{
        printf("Raizes fora do grupo dos Reais\n");
    }
}
    
int main(){
    int A, B, C;

        printf("Digite os parametros a, b e c da equacao:\n");
        scanf("%d""%d""%d", &A, &B, &C);
        printf("As raizes sao %d e %d", bhaskara1(A,B,C), bhaskara2(A,B,C));

return 0;
}