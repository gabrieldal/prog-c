/*Implemente um programa que receba valores para 3 vetores de inteiros de 3 posições cada.
 Ao final apresente a soma dos valores de cada vetor e a informação de qual vetor possui 
 o maior montante armazenado.*/

 #include <stdio.h>

 int main(void) {
     int v1[3], v2[3], v3[3], s1, s2, s3, x;
     s1=s2=s3=0;
    
    for(x=0; x<3; x++){
        printf("%i: ", x);
        scanf("%i", &v1[x]);
        s1=s1+v1[x];
    }
    for(x=0; x<3; x++){
        printf("%i: ", x);
        scanf("%i", &v2[x]);
        s2=s2+v2[x];
    }
    for(x=0; x<3; x++){
        printf("%i: ", x);
        scanf("%i", &v3[x]);
        s3=s3+v3[x];
    }
      if(s1==s2 && s1==s3){
    printf("Os vetores tem o mesmo valor: %i", s1);
  }
  else{
  if(s1>=s2 && s1>=s3){
    printf("v1 tem o maior valor: %i", s1);
  }
  if(s2>=s1 && s2>=s3){
    printf("v2 tem o maior valor: %i", s2);
  }
  if(s3>=s1 && s3>=s2){
    printf("v3 tem o maior valor: %i", s3); 
    }
    

    return 0;
  }
 }
   