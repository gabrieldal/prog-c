/*Faça um programa que ao receber o nome de um arq do usuário com extensão txt, 
gere uma cópia deste em disco com outro nome.  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *arq0;
FILE *arq;

int main()
{
    char name1[30], name2[30], c;
    printf("Digite o nome do arq que quer copiar: ");
    scanf("%s", &name1);
    strcpy(name2, name1);
    arq0 = fopen(strcat(name1, ".txt"), "r");
    arq = fopen(strcat(strcat(name2, "Copia"), ".txt"), "w");

    while ((c = fgetc(arq0)) != EOF)
    {
        fputc(c, arq);
    }

    fclose(arq0);
    fclose(arq);
    return 0;
}