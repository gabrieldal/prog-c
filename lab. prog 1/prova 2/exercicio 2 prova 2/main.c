/*2. Escreva uma função que recebe, por parâmetro, dois valores X e Z e calcula
e retorna Xz . (sem utilizar funções ou operadores de potência prontos).
Obs: Utilize o conceito de Bibliotecas (TAD).*/

#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

int main()
{

    float vx, vz, vy;
    int i;

    printf("Digite um valor para X\n");
    scanf("%f", &vx);
    printf("Digite um valor para Z\n");
    scanf("%f", &vz);

    vy = calculo(vx, vz);

    printf("Resultado:%.2f", vy);

    return 0;
}
