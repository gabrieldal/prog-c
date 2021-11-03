/*Implemente um programa que receba valores para 3 vetores de inteiros de 3 posições cada. 
Ao final transporte estes valores para uma matriz quadrada de ordem 3. 
Apresente a matriz na tela.*/

#include <stdio.h>

 int main(void) {
     int v1[3], v2[3], v3[3], x, y, m[3][3];
     
    
    for(x=0; x<3; x++){
        printf("%i: ", x);
        scanf("%i", &v1[x]);
        
    }
    for(x=0; x<3; x++){
        printf("%i: ", x);
        scanf("%i", &v2[x]);
        
    }
    for(x=0; x<3; x++){
        printf("%i: ", x);
        scanf("%i", &v3[x]);
    }
    for(x=0; x<3; x++){
        m[0][x]=v1[x];
        m[1][x]=v2[x];
        m[2][x]=v3[x];
        }

   for(x=0; x<3; x++){
    for(y=0; y<3; y++){
     printf("%i",m[x][y]);
     printf("\t");
    }
     printf("\n");
  }
    return 0;
 }
        