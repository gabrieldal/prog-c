#include <stdio.h>
#include <string.h>

int main() {
    float id1, id2, id3, id4, m;
    char n1[10], n2[10], n3[10], n4[10];
    id1=id2=id3=id4=0;
  
      printf("digite o nome da primeira pessoa\n");
      scanf("%s", n1);
      printf("digite a idade da primeira pessoa\n");
      scanf("%f", &id1);
      printf("digite o nome da segunda pessoa\n");
      scanf("%s", n2);
      printf("digite a idade da segunda pessoa\n");
      scanf("%f", &id2);
      printf("digite o nome da terceira pessoa\n");
      scanf("%s", n3);
      printf("digite a idade da terceira pessoa\n");
      scanf("%f", &id3);
      printf("digite o nome da quarta pessoa\n");
      scanf("%s", n4);
      printf("digite a idade da quarta pessoa\n");
      scanf("%f", &id4);
      m=(id1+id2+id3+id4)/4;
      printf("a média das idades é: %f \n", m);
      
  
  if(id1<id2 && id1<id3 && id1<id4){
  printf("nome do mais novo: %s", n1);
  }
  if(id2<id1 && id2<id3 && id2<id4){
  printf("nome do mais novo: %s", n2);
  }
  if(id3<id2 && id3<id1 && id3<id4){
  printf("nome do mais novo: %s", n3);
  }
  if(id4<id2 && id4<id3 && id4<id1){
  printf("nome do mais novo: %s", n4);
  }
  if(id4==id2 && id4==id3 && id4==id1 && id1==id2 && id1==id3 && id2==id3){
  printf("todos tem a mesma idade");
  }
  
    return 0;
}
  