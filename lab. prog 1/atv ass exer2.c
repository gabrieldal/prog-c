/*Faça um programa que receba dois arqs do usuário, e crie um terceiro
arq com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro
seguido do conteúdo do segundo). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq1, *arq2, *arq3;
    char x;

    arq1 = fopen("arq1.txt", "r");
    /* if (arq1 == NULL)
     {
         printf("Erro ao abrir o arq de leitura.");
         return 1;
     }*/
    arq2 = fopen("arq2.txt", "r");
    /* if (arq2 == NULL)
     {
         printf("Erro ao abrir o arq de leitura.");
         return 1;
     }*/
    arq3 = fopen("arq3.txt", "w");
    if (arq3 == NULL)
    {
        printf("Erro ao abrir o arq de escrita.");
        return 1;
    }
    else
    {

        while ((x = fgetc(arq1)) != EOF)
        {
            fputc(x, arq3);
        }
        while ((x = fgetc(arq2)) != EOF)
        {
            fputc(x, arq3);
        }
        printf("\narq gerado!\n");
        
        fclose(arq1);
        fclose(arq2);
        fclose(arq3);
    }
    return 0;
}