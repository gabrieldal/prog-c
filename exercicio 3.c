#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int vet[6], x, numeroUsuario;
  x=numeroUsuario=0;
  srand(time(NULL));

  printf("Digite um numero inteiro de 1 a 30:");
  scanf("%i", &numeroUsuario);
  
  for(x=0; x<6; x++){
    vet[x] = (rand() % 30);
    if(vet[x] == 0)
    {
        vet[x] += 1;
    }
  }

  for(x=0; x<6; x++){
    printf("numero %i: %i\n", x, vet[x]);
  }

  printf("\n\n");

  for(x=0; x<6; x++){
    if(vet[x] == numeroUsuario){
        printf("voce acertou o numero %i, parabens!!", numeroUsuario);
    }
  }
  return 0;
}