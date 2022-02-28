#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *arq;

int main()
{
    float nota, notamaior;
    char nome[20], nomedomaior[20];

    if ((arq = fopen("alunos.txt", "r")) == NULL)
    {
        printf("Erro ao abrir!\n");
        return 1;
    }

    while ((fscanf(arq, "NOME:%s NOTA:%f\n", &nome, &nota)) != EOF)
    {
        if (nota > notamaior)
        {
            notamaior = nota;
            strcpy(nomedomaior, nome);
        }
    }

    printf("O aluno com maior nota\n");
    printf("Nome: %s\n", nomedomaior);
    printf("Nota: %.2f\n", notamaior);
    
    fclose(arq);
    return 0;
}