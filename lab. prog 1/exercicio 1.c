/*Faça um programa que ao receber o nome de um arquivo do usuário com extensão txt, 
gere uma cópia deste em disco com outro nome.  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *arquivo0;
FILE *arquivo;

int main()
{
    char name1[30], name2[30], c;
    printf("Digite o nome do arquivo que quer copiar: ");
    scanf("%s", &name1);
    strcpy(name2, name1);
    arquivo0 = fopen(strcat(name1, ".txt"), "r");
    arquivo = fopen(strcat(strcat(name2, "Copia"), ".txt"), "w");

    while ((c = fgetc(arquivo0)) != EOF)
    {
        fputc(c, arquivo);
    }

    fclose(arquivo0);
    fclose(arquivo);
    return 0;
}