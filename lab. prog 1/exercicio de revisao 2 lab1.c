/* Criar um algoritmo que leia os elementos de uma matriz inteira de 3 x 3 e 
imprimir todos os elementos, exceto os elementos da diagonal principal.*/

#include <stdio.h>

int main(void) {

  int mat[3][3], i , j;

  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("\ndigite ");
    scanf("%d",&mat[i][j]);
  }
  }

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      if(i!=j){
        printf("%d\t", mat[i][j]);
      }
    }
    printf("\n");
}
 
  return 0;
}