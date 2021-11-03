/*2. Crie um programa que popule um vetor de inteiros de 10 posições. 
Ordene este vetor em ordem crescente e apresente o resultado na tela.*/

#include <stdio.h>

int main(void){

int v[10], x , y, or;

for(x=0; x<10; x++){
printf("Digite um numero para posicao %i: ", x);
scanf("%i", &v[x]);
}
for(x=0; x<10; x++){
    for(y=x+1; y<10; y++){

        if(v[x]>v[y]){

            or=v[x];
            v[x]=v[y];
            v[y]=or;
        }
    }
}

for(x=0; x<10; x++){
    printf("\n Valor da posicao %i agora e %i", x, v[x]);
}

return 0;
}