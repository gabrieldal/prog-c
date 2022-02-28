/*1 - Defina a função quadrados_inv que recebe como argumento um número natural n e devolve a lista dos quadrados perfeitos até n, por ordem vetorrescente.
Entrada
quadrados_inv(6)
Saída = [36, 25, 16, 9, 4, 1]*/

#include <stdio.h>
#include <stdlib.h>

quadrados_inv(int n){
    if(n > 1){
        printf("%i, ", n*n);
        quadrados_inv(n-1);
    } else {
    printf("1");
    }

}


int main(){

int a;

    printf("Digite um numero para ver quais são seus quadrados perfeitos: ");
    scanf("%i", &a);

    quadrados_inv(a);

 return 0;
}