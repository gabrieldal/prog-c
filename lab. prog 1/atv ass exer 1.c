/*Faça um programa que receba do usuário um arq texto. Crie outro
arq texto contendo o texto do arq de entrada, mas com as vogais
substituídas por ‘*’.*/

#include <stdio.h>

int main()
{
    FILE *arq1, *arq2;
    char c;
    /*abertura do arq para leitura*/
    arq1 = fopen("arq.txt", "r");
    if (arq1 == NULL)
    {
        printf("Erro ao abrir o arq de leitura.");
        return 1;
    }
    /*abertura do arq para escrita*/
    arq2 = fopen("arq2.txt", "w");
    if (arq1 == NULL)
    {
        printf("Erro ao abrir o arq de escrita.");
        return 1;
    }
    /*sera executado a leitura dos caracteres de arq.txt até seu fim*/
    while (feof(arq1) == 0)
    {
        /*leitura feita caractere por caractere*/
        c = getc(arq1);
        /*substituição das vogais por '*' */
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
        {
            c = '*';
            fprintf(arq2, "%c", c);
            /*impressão dos outros caracteres*/
        }
        else if (c != 'ÿ')
            fprintf(arq2, "%c", c);
    }
    /*fechamento dos arqs utilizadps*/
    fclose(arq1);
    fclose(arq2);
    return 0;
}