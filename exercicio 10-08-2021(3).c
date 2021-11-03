/*Implemente um programa que popule com valores aleatórios uma matriz de 4 linhas e 10 colunas.
a. Apresente a matriz na tela;
b. Transporte estes valores para quatro vetores distintos;
c. armazene em um quinto vetor a soma dos quatro anteriores;
d. Apresente na tela os 5 vetores;*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  int m[4][10],v1[10], v2[10], v3[10], v4[10], v5[40], x=0, y=0;
  srand(time(NULL));

  for(x=0; x<4; x++){
    for(y=0; y<10; y++){
      m[x][y]=rand()%50;
    }
  }
  printf("Matriz: \n\n");
  for(x=0; x<4; x++){
    for(y=0; y<10; y++){
      printf("%i\t", m[x][y]);
    }
    printf("\n");
  }
  for(x=0; x<10; x++){
    v1[x]=m[0][x];
    v2[x]=m[1][x];
    v3[x]=m[2][x];
    v4[x]=m[3][x];
    v5[x]=v1[x]+v2[x]+v3[x]+v4[x];
  }

  printf("\n");
  printf("Vetor 1: \n \n");
  for(x=0; x<10; x++){
    printf("%i\t", v1[x]);
  }
  printf("\n \n");
  printf("Vetor 2: \n \n");
  for(x=0; x<10; x++){
    printf("%i\t", v2[x]);
  }
  printf("\n \n");
  printf("Vetor 3: \n \n");
  for(x=0; x<10; x++){
    printf("%i\t", v3[x]);
  }
  printf("\n \n");
  printf("Vetor 4: \n \n");
  for(x=0; x<10; x++){
    printf("%i\t", v4[x]);
  }
  printf("\n \n");
  printf("Vetor da soma: \n \n");
  for(x=0; x<10; x++){
    printf("%i\t", v5[x]);
  }
  
 return 0;
}