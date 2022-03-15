/*1 . (3.0 pontos) Desenvolva uma estrutura para um cadastro de escola
contendo os seguintes campos:
Nome: string de tamanho 15
Matricula: inteiro
Código curso: inteiro
a) Defina a estrutura adequada para a descrição dos campos acima,
declarando um vetor de 10 elementos;
b) Desenvolva um procedimento que receba o código do curso e imprima os
alunos desse curso;
c) Desenvolva uma função que recebe uma matricula e verifica se ela consta
no sistema;
c) Desenvolva a função principal.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cadastro
{
    char nome[15];
    int matricula, c_curso;
} vetor[10];

void digitar()
{
    for (int x = 0; x < 2; x++)
    {
        fflush(stdin);
        printf("\nDigite o Nome do aluno\n");
        gets(vetor[x].nome);
        fflush(stdin);
        printf("\nDigite a matricula do aluno\n");
        scanf("%i", &vetor[x].matricula);
        printf("\nDigite o Codigo do curso\n");
        scanf("%i", &vetor[x].c_curso);
    }
}
void curso()
{
    int codigo;
    printf("\n Digite o codigo do curso\n");
    scanf("%i", &codigo);

    for (int x = 0; x < 2; x++)
    {

        if (codigo == vetor[x].c_curso)
        {
            printf("%s", vetor[x].nome);
        }
    }
}
int verificarmat(int matr)
{
    int m = 1;
    for (int x = 0; x < 2; x++)
    {
        if (matr == vetor[x].matricula)
        {
            m = 0;
        }
    }
    return m;
}

int main()
{
    int opc = 0, mat;

    while (opc != 4)
    {

        printf("\n***MENU***\n ");
        printf("1. Cadastrar aluno\n ");
        printf("2. Verificar alunos pelo curso\n ");
        printf("3. Verificar matricula\n ");
        printf("4. Sair\n ");
        printf("Opção: \n ");
        scanf("%i", &opc);

        switch (opc)
        {
        case 1:
            digitar();
            break;
        case 2:
            curso();
            break;
        case 3:
            printf("Digite a matricula\n");
            scanf("%i", &mat);
            mat = verificarmat(mat);
            if (mat == 0)
            {
                printf("está cadastrado!");
            }
            else
            {
                printf("Não está no cadastro!");
            }

            break;
        case 4:

            break;

        default:
            printf("opcao invalida");
            break;
        }
    }
    return 0;
}