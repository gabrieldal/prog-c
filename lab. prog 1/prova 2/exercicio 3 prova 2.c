/*3. Faça um procedimento que recebe, por parâmetro, um valor N e calcula e
escreve a tabuada de N, de forma recursiva. Grave o conteúdo da tabuada em
um arquivo texto chamado tabuada.txt.
1 x N = N
2 x N = 2N
...
N x N = N2*/

#include <stdio.h>
#include <stdio.h>

FILE *arquivo;

void calculo(int N, int x)
{
    printf("%i\n", N * x);
    fprintf(arquivo, "%i\n", N * x);

    if (N == x)
    {
        return;
    }
    else
    {
        return calculo(N, x + 1);
    }
}
void calc(int N)
{
    calculo(N, 1);
}

int main()
{
    int y;
    if ((arquivo = fopen("tabuada.txt", "w")) == NULL)
    {
        printf("erro");
        return 1;
    }
    printf("\ndigite um numero:\n");
    scanf("%i", &y);
    calc(y);

    fclose(arquivo);

    return 0;
}