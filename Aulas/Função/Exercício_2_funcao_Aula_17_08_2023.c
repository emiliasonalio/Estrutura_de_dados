//Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e
//uma letra. Se a letra for A o procedimento calcula a média aritmética das notas do
//aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2) e se for H, a sua média
//harmônica. A média calculada também deve retornar por parâmetro.

#include <stdio.h>
#include<locale.h>

float notasAluno (float nota1, float nota2, float nota3, char metodo);

int main (){

    float nota1, nota2, nota3, modalidade;

    printf("Insira as notas do aluno e em seguida o tipo de média (aritimética = A; ponderada = P; harmônica = H)");

    scanf("%f" &nota1);
    scanf("%f" &nota2);
    scanf("%f" &nota3);
    scanf("%c" &modalidade);

    printf("A nota final é %f", notasAluno(nota1, nota2, nota3, modalidade));

}
float notasAluno (float nota1, float nota2, float nota3, char metodo){
    if (metodo == 'A'){
        float media = (nota1 + nota2 + nota3)/3;
    }
    else if (metodo == 'P'){
        float media = ((nota1 * 5)+(nota2 * 3)+(nota3 * 2))/10
    }
    else if (metodo == 'H'){
        float media = 3 / ((1/nota1) + (1/nota2) + (1/nota3));
    }
}
        