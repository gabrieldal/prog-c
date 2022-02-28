/*1. Implemente um programa que receba um valor binário de 8bits (vetor)
 e realize a conversão deste para vetorimal –
 apresente o resultado na tela.*/

#include <stdio.h>
int main(void) {

int v[8], x, d;
d=0;

printf("Digite um número binário de 8 bits: ");

for(x=0; x<8; x++){
scanf("%i", &v[x]);
}

d=128*v[0]+64*v[1]+32*v[2]+16*v[3]+8*v[4]+4*v[5]+2*v[6]+1*v[7];
printf("Seu numero em vetorimal: %i", d);


return 0;
}