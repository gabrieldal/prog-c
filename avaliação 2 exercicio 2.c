/*Implemente um programa que popule, com valores aleatórios entre 35 e 70, 
uma matriz quadrada de ordem 9. Ao final:

a. Liste a matriz na tela;

b. Copie os valores armazenados na diagonal principal da matriz para um vetor
 e apresente este vetor na tela;

c. Apresente a soma dos valores pares presentes na ultima coluna da matriz;*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

int m[9][9], x, y, v[9], sm, g[9];
srand(time(NULL));
x=y=sm=0;

    for(x=0; x<9; x++){
        for(y=0; y<9; y++){
        m[x][y] =35 +  (rand()%36);
    }
}
    printf("Matriz: \n\n");
     for(x=0; x<9; x++){
        for(y=0; y<9; y++){
        printf("%i\t", m[x][y]);
    }
    printf("\n");
}

    printf("\n");
    printf("Diagonal Principal \n");
    for(x=0; x<9; x++){
        v[x]=m[x][x];
        printf("%i \t", v[x]);
    }
    printf("\n");
    printf("Soma dos pares da ultima coluna: \n");
    for(x=0; x<9; x++){
        g[x]=m[x][8];
        if(g[x]%2==0){
            sm+=g[x];
        }
    }
    
    printf("%i", sm);





    return 0;
}