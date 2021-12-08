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
}f2;

struct ficha f1;


int main(void) {
  printf("digite nome:\n");
  gets(f1.nome);
  
  printf("digite rua:\n");
  gets(f1.var1.endereco);

  printf("digite o numero da casa:\n");
  scanf("%d", &f1.var1.num);

  printf("digite idade:\n");
  scanf("%d", &f1.idade);

  printf("%s \n %s \t %d \n %d", f1.nome,f1.var1.endereco,f1.var1.num, f1.idade);

  return 0;
}