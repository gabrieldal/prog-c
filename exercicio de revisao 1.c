/*
Implemente um programa que armazene o nome e 3 notas de 5 alunos e :
a. Implemente o calculo da média dos alunos - armazenar as médias.
b. Apresente uma mensagem para os alunos aprovados, apresentando nome e nota.
c. liste todos os dados dos alunos
*/
#include<stdio.h>
#include<string.h>
int main(){
  char nome[5][30];
  float n1[5], n2[5], n3[5], md[5];
  int x;

  for(x=0; x<5; x++){
    printf("Aluno: %i \n", x+1);
    printf("Nome: ");
    scanf("%s", nome[x]);
    printf("Nota 1: ");
    scanf("%f", &n1[x]);
    printf("Nota 2: ");
    scanf("%f", &n2[x]);
    printf("Nota 3: ");
    scanf("%f", &n3[x]);
    md[x]=(n1[x]+n2[x]+n3[x])/3;
    printf("Média: %.2f \n", md[x]);
  }

  printf("/// APROVADOS /// \n");
  for(x=0; x<5; x++){
    if(md[x]>=6){
      printf("Parabéns %s, você foi aprovado: %.2f \n", nome[x],md[x]);
    }
  }
  
  printf("/// DADOS DOS ALUNOS /// \n");
  printf("Nome \t N1 \t N2 \t N3 \t Média \n");
  for(x=0; x<5; x++){
    printf("%s \t %.2f \t %.2f \t %.2f \t %.2f \n", nome[x],n1[x], n2[x], n3[x],md[x]);
  }
  return 0;
}