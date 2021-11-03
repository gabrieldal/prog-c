#include <stdio.h>
#include <string.h>

int main(void) {
  float p1, p2, a1, a2, imc1, imc2;
  char n1[10], n2[10];
  p1=p2=a1=a2=0;
  printf("digite o primeiro nome: ");
  scanf("%s", n1);
  printf("digite o nome do segundo: ");
  scanf("%s", n2);
  printf("digite o peso do primeiro: ");
  scanf("%f", &p1);
  printf("digite o peso do segundo: ");
  scanf("%f", &p2);
  printf("digite a altura do primeiro: ");
  scanf("%f", &a1);
  printf("digite a altura do segundo: ");
  scanf("%f", &a2);

  printf("\n");

  imc1=p1/(a1*a1);
  imc2=p2/(a2*a2);

  if(imc1 < 18.5 && imc2 < 18.5){
    printf("Os IMCs são Abaixo do peso\n");
  }
  if(imc1 > 18.5 && imc1 < 24.9 && imc2 < 18.5){
    printf("O IMC do primeiro é Peso Normal e o segundo é abaixo do peso\n");
  }
  if(imc1 > 25 && imc1 < 29.9 && imc2 < 18.5){
    printf("O IMC do primeiro é Sobrepeso e o segundo é abaixo do peso\n");
  }
  if(imc1 > 30  && imc1 < 34.9 && imc2 < 18.5){
    printf("O IMC do primeiro é Obesidade grau 1 o segundo é abaixo do peso\n");
  }





  if(imc1 < 18.5 && imc2 > 18.5 && imc2 < 24.9){
    printf("o IMC do primeiro é abaixo do peso e o segundo é peso normal \n");
  }
  if(imc1 > 18.5 && imc1 < 24.9 && imc2 > 18.5 && imc2 < 24.9){
    printf("Ambos IMC são peso normal\n");
  }
  if(imc1 > 25 && imc1 < 29.9 && imc2 > 18.5 && imc2 < 24.9){
    printf("O IMC do primeiro é Sobrepeso e o segundo é peso normal\n");
  }
  if(imc1 > 30  && imc1 < 34.9 && imc2 > 18.5 && imc2 < 24.9){
    printf("O IMC do primeiro é Obesidade grau 1 o segundo é peso normal\n");
  }




  if(imc1 < 18.5 && imc2 > 25 && imc2 < 29.9){
    printf("o IMC do primeiro é abaixo do peso e o segundo é sobrepeso \n");
  }
  if(imc1 > 18.5 && imc1 < 24.9 && imc2 > 25 && imc2 < 29.9){
    printf("O primeiro IMC é peso normal e o sgundo é sobrepeso\n");
  }
  if(imc1 > 25 && imc1 < 29.9 && imc2 > 25 && imc2 < 29.9){
    printf("Ambos são Sobrepeso\n");
  }
  if(imc1 > 30  && imc1 < 34.9 && imc2 > 25 && imc2 < 29.9){
    printf("O IMC do primeiro é Obesidade grau 1 o segundo é sobrepeso\n");
  }





  if(imc1 < 18.5 && imc2 > 30  && imc2 < 34.9 ){
    printf("o IMC do primeiro é abaixo do peso e o segundo é obesidade grau 1 \n");
  }
  if(imc1 > 18.5 && imc2 > 30  && imc2 < 34.9 ){
    printf("O primeiro IMC é peso normal e o sgundo é obesidade grau 1\n");
  }
  if(imc1 > 25 && imc1 < 29.9 && imc2 > 30  && imc2 < 34.9 ){
    printf("O primeiro IMC é sobrepeso e o segundo é obesidade grau 1\n");
  }
  if(imc1 > 30  && imc1 < 34.9 && imc2 > 30  && imc2 < 34.9 ){
    printf("Ambos IMC são grau 1\n");


  }
  if(imc1 > 18.5 && imc1 < 24.9 && imc2 > 18.5 && imc2 < 24.9){
    printf("individuos com peso normal %s - %s", n1, n2);
  }
    if(imc1 > 18.5 && imc1 < 24.9 && imc2 < 18.5 && imc2 > 24.9){
    printf("individuo com peso normal %s", n1);
  }
 
    if(imc2 > 18.5 && imc2 < 24.9 && imc1 < 18.5 && imc1 > 24.9){
    printf("individuo com peso normal %s", n2);
  }

  return 0;
}