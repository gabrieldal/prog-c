/*1 - Criar uma função que retorna o seguinte: a função recebe 3 valores e 
retornar o quadrado do primeiro + a soma dos outros dois.*/


#include<stdio.h>

int calc (int x, int y, int z){//função

int c;

c = (x*x)+y+z;

return c;//retornando para C
}

int main(void){

int x, y, z, c;

    printf("Digite o primeiro número: \n");
    scanf("%i", &x);
    printf("Digite o segundo número: \n");
    scanf("%i", &y);
    printf("Digite o terceiro número: \n");
    scanf("%i", &z);
    
    c = calc(x,y,z);//chamando função
    
    printf("resultado: %i", c);

return 0;
}




    