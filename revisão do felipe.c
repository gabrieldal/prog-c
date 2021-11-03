/*O software deve sortear e armazenar em uma matriz 25 valores inteiros entre 0 e 100.

O usuário deve informar 3 números por jogada (são permitidas 2 jogadas).

Por jogada: o acerto de 1 número vale 10 pontos e o acerto de 2 números vale 100 pontos e o acerto de 3
números vale 500 pontos (Valores não são cumulativos).

O sistema ao final deve:

a. Possuir uma função para realizar a validação de acertos/erros da aposta do usuário

b. Possuir um procedimentos para apresentar as mensagens com o total de acertos do usuário.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int m[5][5], x, y, z, p1, p2, i[6], v[6];

int check(){
    for(x=0; x<5; x++){
        for(y=0; y<5; y++){
            for(z=0; z<6; z++){
                if (m[x][y] == v[z]){
                    i[z]=1;
                }
            }
        }
    }
    if (i[0]==1 && i[1]==1 && i[2]==1){
        p1 = 500;
    }else if (i[0]==1 && i[1]==1){
        p1 = 100;
    }else if (i[0]==1 && i[2]==1){
        p1 = 100;
    }else if (i[1]==1 && i[2]==1){
        p1 = 100;
    }else if (i[0]==1){
        p1 = 10;
    }else if (i[1]==1){
        p1 = 10; 
    }else if (i[2]==1){
        p1 = 10;     
    }
    if (i[3]==1 && i[4]==1 && i[5]==1){
        p2 = 500;
    }else if (i[3]==1 && i[4]==1){
        p2 = 100;
    }else if (i[3]==1 && i[5]==1){
        p2 = 100;
    }else if (i[4]==1 && i[5]==1){
        p2 = 100;
    }else if (i[3]==1){
        p2 = 10;
    }else if (i[4]==1){
        p2 = 10; 
    }else if (i[5]==1){
        p2 = 10;     
    }

    return 0;
}
void procedimento(){
        printf("Jogada 1: %i \n", p1);
        printf("Jogada 2: %i \n", p2);
}


int main(){
srand(time(NULL));


for(x=0; x<5; x++){
    for(y=0; y<5; y++){
        m[x][y] = rand () % 100;
    }
}
for(x=0; x<5; x++){
    for(y=0; y<5; y++){
        printf("%i \t", m[x][y]);
    }
    printf("\n");
}

printf("Digite os numeros para serem sorteados: \n");

for(x=0; x<6; x++){
    printf("aposta %i: ", x+1);
    scanf("%i", &v[x]);
} 

    check();
    procedimento();



    system("pause");
    return 0; 
}


