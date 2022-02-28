#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *arq;

int main()
{
    int vetor[10], bin[10][10], t=0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            bin[i][j] = 0;
        }
    }
    
    
    printf("Informe10 numeros: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%i: ", i+1);
        scanf("%i", &vetor[i]);
    }

    if ((arq = fopen("numbinarios.txt", "w")) == NULL)
    {
        printf("Erro ao abrir\n");
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {
        fprintf(arq, "%d = ", vetor[i]);
        for (int j = 0; vetor[i] > 0; j++)
        {
            bin[i][j] = vetor[i] % 2;
            vetor[i] = vetor[i] / 2;
        }
        t=0;
        for (int h = 10; h >= 0; h--)
        {
            if (bin[i][h] == 1)
            {
                t = 1;
            }
            if (t == 1)
            {
                fprintf(arq, "%i", bin[i][h]);
            }
        }
        fprintf(arq, "\n");
    }

    fclose(arq);
    return 0;
}