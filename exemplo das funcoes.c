/*Crie um programa que pópule uma matriz quadrata de ordem 10, com valores aleatórios, e:

a. apresente a matriz na tela
b. implemente um procedimento para calcular e apresentar a soma dos elemento das DP
desta matriz*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int mat[10][10];
int soma = 0;
int sdp(){
  int x;
  for(x=0; x<10; x++){
    soma += mat[x][x];
  }
  return 0;
}
int main(void) {
  int x, y;
  srand(time(NULL));

  for(x=0; x<10; x++)
  {
    for(y=0; y<10; y++)
    {
        mat[x][y]=rand()%100;
    }
  }
  for(x=0; x<10; x++)
  {
    for(y=0; y<10; y++)
    {
        printf("%i\t", mat[x][y]);
    }
    printf("\n");
  }
  sdp();
  printf("Soma da dp: %i \n", soma);
  return 0;
}