#include <stdio.h>
#include <stdlib.h>
#include "agenda.h"

int main()
{
    int opcao = 0;
    while (opcao != 5)
    {

        printf("MENU:\n");
        printf("1. Cadastrar contato \n");
        printf("2. Buscar por nome\n");
        printf("3. Buscar por mes de aniversario\n");
        printf("4. Acessar agenda\n");
        printf("5. Sair\n");
        scanf("%i", &opcao);
        fflush(stdin);
        switch (opcao)
        {
        case 1:

            cadastrar();

            break;

        case 2:

            buscaNome();

            break;

        case 3:

            buscaMes();

            break;

        case 4:

            imprimeAgenda();

            break;

        default:
            break;
        }
    }

    return 0;
}