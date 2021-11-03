/*Crie um programa em C que armazene valores inteiros e aleatórios entre (1 e 100) em um vetor de 20
posições. O sistema deverá conter:

a. Uma função para identificar e apresentar as posições do vetor que possuem valores repetidos. 
Caso não ocorram valores repetidos o sistema deverá apresentar a mensagem: "Vetor sem valores repetidos!".

b. Um procedimento para mostrar o somatório dos valores repetidos.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int v[20],rep, x, y, reps[20], s;

int repet(int x, int y){
    
    int repetidos = 0;

     if (v[x] == v[y]){
        repetidos == 1;
     }

    return repetidos;
}

void soma() {
    for (int x = 0; x < 20; x++) {
        if (repetidos[i]==1) {
            s+=v[x];
        }
    }
    printf("Somatorio dos valores repetidos: %i", s);
}


int main(){

    
    srand(time(NULL));

        for(x=0; x<20; x++){
            v[x]=(rand() % 100);
            printf("Valor %i: [%i]\n", x+1, v[x]);
        }  

        for(x=0; x<20; x++){
            for(y=x+1; y<20; y++){
                rep == repet(x, y);
                if (rep == 1){
                    reps[x] = 1;
                    reps[y] = 1;
                
                }
            }
        }
        for (int x = 0; x < 20; x++) {
        if (reps[x]==1) {
            printf("Posicao repetida: %i\n", x);
        }
    }

    soma()






    return 0;
}