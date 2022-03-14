#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ficha
{
    char nome[21];
    int idade;
    struct ficha *prox;
};

typedef struct ficha fichas;

fichas *start = NULL;

fichas *incluir(fichas *head)
{
    if (head == NULL)
    {
        head = malloc(sizeof(fichas));
        printf("\nDigite o nome:\n");
        fflush(stdin);
        gets(head->nome);
        printf("\nDigite a idade:\n");
        fflush(stdin);
        scanf("%i", &head->idade);
        head->prox = NULL;
        return head;
    }
    else
    {
        fichas *ptr = malloc(sizeof(fichas));
        printf("\nDigite o nome:\n");
        fflush(stdin);
        gets(ptr->nome);
        printf("\nDigite a idade:\n");
        fflush(stdin);
        scanf("%i", &ptr->idade);
        ptr->prox = NULL;
        fichas *ptr2 = head;
        while (ptr2->prox != NULL)
        {
            ptr2 = ptr2->prox;
        }
        ptr2->prox = ptr;
        return head;
    }
}
void mostrar(fichas *head)
{
    if (head == NULL)
    {
        printf("Lista Vazia");
    }
    else
    {
        while (head->prox != NULL)
        {
            head = head->prox;
        }
        printf("Nome: %s\n", head->nome);
        printf("Idade: %i\n", head->idade);
    }
}
void mostrar_full(fichas *head)
{
    if (head == NULL)
    {
        printf("Lista Vazia");
    }
    else
    {
        while (head != NULL)
        {

            printf("Nome: %s\n", head->nome);
            printf("Idade: %i\n", head->idade);
            head = head->prox;
        }
    }
}
fichas *excluir(fichas *head)
{

    if (head == NULL)
    {
        printf("Lista Vazia");
        return;
    }
    else if (head->prox = NULL)
    {
        free(head);
        head = NULL;
        return head;
    }
    else
    {
        fichas *ptr3 = head;
        while (ptr3->prox != NULL)
        {
            ptr3 = ptr3->prox;
        }
        free(ptr3);
        ptr3 = NULL;
        fichas *ptr4 = head;
        while (ptr4->prox != NULL)
        {
            ptr4 = ptr4->prox;
        }
        ptr4->prox = NULL;
        
        return head;
    }
}
fichas *sair(fichas *head)
{
    if (head != NULL)
    {
        fichas *ptr5 = head;
        while (head != NULL)
        {
            head = head->prox;
            free(ptr5);
            ptr5 = head;
        }
        return head;
    }
    return;
}