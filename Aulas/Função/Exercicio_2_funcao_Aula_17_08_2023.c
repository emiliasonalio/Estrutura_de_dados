//Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e
//uma letra. Se a letra for A o procedimento calcula a média aritmética das notas do
//aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2) e se for H, a sua média
//harmônica. A média calculada também deve retornar por parâmetro.

#include <stdio.h>
#include<locale.h>

float notasAluno (float nota1, float nota2, float nota3, char metodo);

int main (){

    float n1, n2, n3;
    float media; 

    printf("Insira as notas do aluno:\n");

    scanf("%f""%f""%f", &n1, &n2, &n3);

    printf("A media aritimetica e %.2f\n", notasAluno(n1, n2, n3, 'A'));
    printf("A media ponderada e %.2f\n", notasAluno(n1, n2, n3, 'P'));
    printf("A media harmonica e %.2f\n", notasAluno(n1, n2, n3, 'H'));

    return 0;
}
float notasAluno (float nota1, float nota2, float nota3, char metodo){
    if (metodo == 'A'){
        return (nota1 + nota2 + nota3)/3;
    }
    else if (metodo == 'P'){
        return ((nota1 * 5)+(nota2 * 3)+(nota3 * 2))/10;
    }
    else if (metodo == 'H'){
        return (3 / ((1/nota1) + (1/nota2) + (1/nota3)));
    }
}
        