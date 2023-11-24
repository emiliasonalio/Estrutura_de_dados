/*Considere uma estrutura (struct) chamada Aluno que possui os seguintes campos:
• nome (uma string com no máximo 50 caracteres).
• matrícula (um número inteiro).
• nota (um número decimal).
Declare um vetor de estruturas Aluno para armazenar informações de alunos. O tamanho do vetor pode ser definido como você
preferir (por exemplo, 5 alunos). Escreva um programa que permita ao usuário inserir informações
para cada aluno no vetor de estruturas. Use ponteiros para percorrer e preencher as informações.
Em seguida, crie uma função chamada encontraMelhorAluno que recebe o vetor de estruturas de alunos e seu tamanho como
argumentos e retorna um ponteiro para o aluno com a nota mais alta. Crie outra função chamada encontraPiorAluno que também
recebe o vetor de alunos, mas retorna um ponteiro para o aluno com a nota mais baixa. Finalmente, na função main, chame a função encontraMelhorAluno
e encontraPiorAluno e imprima os detalhes desses alunos (nome, matrícula e nota).*/

#include<stdio.h>
#include<locale.h>

struct Aluno{
    char[50] nome;
    int matricula;
    float nota;
}

main(){
    




    return 0;
}