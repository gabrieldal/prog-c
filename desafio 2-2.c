/*
2. Implemente um sistema que receba e armazene uma lista de 10 nomes completos, e:
a. Apresente a lista de nomes na tela;
b. Mostre a média de caracteres por nomes;
c. Concatene, em uma variável distinta, o primeiro e ultimo nomes informados;
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char n[10][30];
    float car[10];
    float sm, m;
    char nf[64];

    printf("Digite 10 nomes completos: \n");
    for (int i = 0; i < 10; i++){
        printf("%i. ", i+1);
        gets(n[i]);
    }
    
    printf("\nLista dos nomes: \n");
    for (int i = 0; i < 10; i++){ puts(n[i]); }

    for (int i = 0; i < 10; i++){ car[i] = strlen(n[i]); }
   
    sm=car[0]+car[1]+car[2]+car[3]+car[4]+car[5]+car[6]+car[7]+car[8]+car[9];
    
   
    m = sm/10;
    printf("\nMedia de caracteres por nome: %.2f \n", m);

    nf[64] = strcat(n[0], n[9]);
    puts(nf);

    return 0;
}