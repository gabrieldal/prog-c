//Crie um programa que popule uma matriz quadrada de ordem 4 com valores inteiros. 
//Ao final apresente a soma dos valores armazenados na diagonal principal desta matriz.


#include <stdio.h>


int main(void) {
  int d1[4][4], d2=0, x=0, y=0;
  


  
  for(x=0; x<4; x++){
    for(y=0; y<4; y++){
  printf("Informe um valor[%i][%i]: ", x, y);
  scanf("%i", &d1[x][y]);
  
  }
  }
  printf("Números: \n\n\n");
  for(x=0; x<4; x++){
    for(y=0; y<4; y++){
    printf("%i\t", d1[x][y]);
    if(y==3){
      printf("\n");
    }
    }
  }
  for(x=0; x<4; x++){
   
   d2=d2+d1[x][x];
  

  }

  printf("\n\nSoma da diagonal principal é igual a %i", d2);
  




  





  return 0;
}