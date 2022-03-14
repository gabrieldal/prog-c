#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

int main()
{
    int opc = 0;

    while (opc != 4)
    {

        printf("***MENU***\n ");
        printf("1. Incluir Nome e idade\n ");
        printf("2. Mostrar ultimo\n ");
        printf("3. Excluir ultimo\n ");
        printf("4. Sair\n ");
        printf("Opção: \n ");
        scanf("%i", &opc);

        switch (opc)
        {
        case 1:
            start = incluir(start);
            break;
        case 2:
            mostrar(start);
            break;
        case 3:
            start = excluir(start);
            break;
        case 4:
            start = sair(start);
            break;
        case 5:
            mostrar_full(start);
            break;
        default:
            printf("opcao invalida");
            break;
        }
    }
    return 0;
}