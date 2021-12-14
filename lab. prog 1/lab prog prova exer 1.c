/*1. (3.0 pontos) Crie uma estrutura representando os alunos do curso de Laboratório de
Programação I. A estrutura deve conter a matrícula do aluno, nome, nota da primeira
prova e nota da segunda prova.
a) Permita ao usuário entrar com os dados de 5 alunos;
b) Encontre o aluno com maior média geral;
c) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct labprog{

    int matricula;
    char nome[20];
    float nota1, nota2;
}aluno[5];


int main(){

int x;
float media_aluno[5], maiormedia;

for(x=0; x<5; x++){
    printf("Digite o nome do Aluno: ");
    scanf("%s", &aluno[x].nome);
    printf("Digite a matricula desse aluno: ");
    scanf("%i", &aluno[x].matricula);
    printf("Digite a nota da primeira prova desse aluno: ");
    scanf("%f", &aluno[x].nota1);
    printf("Digite a nota da segunda prova desse aluno: ");
    scanf("%f", &aluno[x].nota2);
}

    for(int x=0; x<5; x++){
        media_aluno[x]=(aluno[x].nota1+aluno[x].nota2)/2;
    }

for(x=0;x<5;x++){
    if(media_aluno[x] >= 6){
        printf("O aluno %s esta aprovado\n", aluno[x].nome);
    } else {
        printf("O aluno %s esta reprovado\n", aluno[x].nome);
    }
}



return 0;
}