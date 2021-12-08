#include <stdio.h>
#include <string.h>

struct end{
char endereco[50];
int num;
};

struct ficha{
char nome[20];
struct end var1;
int idade;
}f2[5], f3;

struct ficha f1, f4[50];

int main(void) {
  int i;
  for(i=0; i<2; i++){
    fflush(stdin);
  printf("digite nome:\n");
  gets(f2[i].nome);
  fflush(stdin);
  printf("digite rua:\n");
  gets(f2[i].var1.endereco);
fflush(stdin);
  printf("digite o numero da casa:\n");
  scanf("%d", &f2[i].var1.num);
fflush(stdin);
  printf("digite idade:\n");
  scanf("%d", &f2[i].idade);
  }
  
  
  printf("%s \n %s \t %d \n %d", f2[0].nome,f2[0].var1.endereco,f2[0].var1.num, f2[0].idade);

  return 0;
}