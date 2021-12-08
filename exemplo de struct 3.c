#include <stdio.h>

struct chamada{
int id;
float media[4];
};

int main(void) {
 struct chamada dados;
 float medias=0;

 printf("digite o id\n");
scanf("%d",&dados.id);

for(int i=0; i<4; i++){
printf("digite a media\n");
scanf("%f", &dados.media[i]);
}

 for(int i=0; i<4; i++){
medias=medias+dados.media[i];
 } 
 medias=medias/4;

 printf("a media dos alunos é %.2f", medias);
 return 0;
}