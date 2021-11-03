/*Implemente um programa que receba 10 valores inteiros (armazene em um vetor) 
e apresente na tela a soma dos números armazenados nas posições pares neste vetor.*/

#include <stdio.h>

int main(void) {

    int vet[10], x, soma;
    x=soma=0;

    for(x=0; x<10; x++){
        printf("valor [%i]:  ", x);
        scanf("%i", &vet[x]);
    }
    for(x=0; x<10; x++){
    if((x % 2)==0);{
    soma=soma+vet[x];
    }
    }
    printf("soma dos pares: [%i]", soma);
    

    return 0;
}