/* Implemente um sistema em linguagem C para o gerenciamento de carros de uma revenda.
O sistema deverá armazenar o modelo, valor de compra e de venda de 10 veículos - listar todos os dados na tela.
Com estes dados armazenados:

a. Calcular a média de valores de compra dos veículos (Função).
b. Mostrar todos os carros cujo o valor de compra foi maior que o valor médio (Procedimento).
c. A partir do calculo de compra e venda, criar um vetor que armazene o valor de lucro de cada veículo (Função principal).
d. Listar o vetor de lucro na tela, em ordem vetorrescente (Procedimento).    */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculamediacompra (float vbuy[10]) {
        float m=0;
       for (int i = 0; i < 10; i++)
       {
            m = m + vbuy[i];
       }
        
        m=m/3;
        return m;
    
}

void mostrar (float vbuy[10], float m, char name[10][20]) {
    for (int i = 0; i < 10; i++)
    {
       if (vbuy[i]> m) {
           printf("%s \n",name[i]);
       }
    }
    

}

void ordemd (float lucros[10]) {
      float troca;
      for (int i = 0; i < 10; i++)
      {
          for (int u = 1+i; u < 10; u++)
          {
              if(lucros[i] < lucros[u]){
                  troca=lucros[u];
                  lucros[u]=lucros[i];
                  lucros[i]=troca;
              }
          }
          
      }
      
    printf("o vetor de lucro  em ordem vetorrescente: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f \n", lucros[i]);
    }
    

}



int main () {
    char vmodelo[10][20]; //vetor modelo
    float  vcompra[10] , vvenda[10],media,lucro[10]; //valor de compra e valor de venda
    int x ;
    
    for (x=0; x<10; x++) { 
    printf("Informe o modelo do veiculo[%i]: \n", x+1 );
    scanf("%s", &vmodelo[x]);
    printf("Informe o valor de compra do veiculo[%i]: \n", x+1 );
    scanf("%f", &vcompra[x]);   
    printf("Informe o valor de venda do veiculo[%i]: \n", x+1 );
    scanf("%f", &vvenda[x]);   
    }
    
    printf("Modelos | valor de compra | valor de venda dos veiculos: \n" );
    for (x=0; x<10; x++) { 
    printf("Modelo  | valor de compra | valor de venda do veiculo[%i]: \n", x+1 );
    printf("%s \t\t %.2f \t\t %.2f \n", vmodelo[x], vcompra[x], vvenda[x] ); 
      
        }

        
    media=calculamediacompra (vcompra);
    printf("media de valores de compra dos veiculos: %.2f", media);

    printf("\nCarros cujo o valor de compra foi maior que o valor medio: \n");
    mostrar(vcompra, media, vmodelo);

    for ( x = 0; x < 10; x++)
    {
        lucro[x]=vvenda[x]-vcompra[x];
    }
    
    ordemd (lucro);


    return 0 ;
}