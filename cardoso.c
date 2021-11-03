#include <stdio.h>
#include <string.h>
int main(void) {
  int cod[30],quant[30],a1;
  float limite,vg[30],vup[30],menorv,vcomp[30],mvu,vgasto,valorneg ,vmedpcomp,auxmed,vgastopcompra[30];
  char descri[30][30];
  a1=mvu=auxmed=0;
  printf("Informe o valor limite das compras: ");
  scanf("%f",&limite);

  while(vgasto<limite ){
    printf("Informe o código da compra: ");
    scanf("%i",&cod[a1]);

    printf("Informe o produto: ");
    scanf("%s", &descri[a1]);

    printf("Informe a quantidade de produtos: ");
    scanf("%i",&quant[a1]);

    printf("Informe o valor unitário do produto: ");
    scanf("%f",&vup[a1]); 

    vgasto=vgasto+ quant[a1]*vup[a1];
    vcomp[a1]=vgasto;
       a1++;
    printf("valor gasto: %.2f \n", vgasto );
     printf(" \n");
      vgastopcompra[a1]=vgasto;
     auxmed=auxmed+1;
  }

mvu=0;

for(a1=0; a1<30; a1++ ){
  if(vup[a1]>mvu){
    mvu=vup[a1];
  }

}

menorv=vgastopcompra[0];

for(a1=1; a1<30; a1++ ){
  if(menorv<vgastopcompra[a1]){
    menorv=vgastopcompra[a1];

  }

}
printf("Compra de menor valor: %f",menorv);

printf("\n\n%f",mvu);




vmedpcomp= (vgasto)/ auxmed;
valorneg=limite-vgasto;
printf("Voce está %.2f negativo \n",valorneg );


printf("Valor médio por compra: %.2f ", vmedpcomp ) ;

 if(vgasto>limite){
      printf("você ultrapassou o limite!");
    } 
  return 0;
}