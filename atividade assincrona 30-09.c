/*Implemente um sistema em linguagem C para o gerenciamento de carros de uma revenda.
O sistema deverá armazenar o modelo, valor de compra e de venda de 10 veículos - 
listar todos os dados na tela. Com estes dados armazenados:

a. Calcular a média de valores de compra dos veículos (Função).

b. Mostrar todos os carros cujo o valor de compra foi maior que o valor médio (Procedimento).

c. A partir do calculo de compra e venda, criar um vetor que armazene
o valor de lucro de cada veículo (Função principal).

d. Listar o vetor de lucro na tela, em ordem decrescente (Procedimento).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcula_media_compra (float valor_compra[10]) {
       float m=0;
        for (int i = 0; i < 10; i++){
            m = m + valor_compra[i];
            }
        
        m=m/3;
        return m;

}

void mostrar (float valor_compra[10], float m, char nome[10][20]){
    for (int i = 0; i < 10; i++){
       if (valor_compra[i]> m){
           printf("%s \n",nome[i]);
        }
    }
    

}

void ordem (float luc[10]){
      float troca;
      for (int i = 0; i < 10; i++){
          for (int u = 1+i; u < 10; u++){
              if(luc[i] < luc[u]){
                  troca=luc[u];
                  luc[u]=luc[i];
                  luc[i]=troca;
            }
        }
          
    }
      
    printf("o vetor de lucro  em ordem decrescente: \n");
    for (int i = 0; i < 10; i++){
        printf("%.2f \n", luc[i]);
    }
    

}



int main () {
    char valor_modelo[10][20];
    float  valor_compra[10] , valor_venda[10],media,lu[10]; 
    int x;
    
    for (x=0; x<10; x++){ 
    printf("Digite o modelo do veiculo[%i]: \n", x+1);
    scanf("%s", &valor_modelo[x]);
    printf("Digite o valor de compra do veiculo[%i]: \n", x+1);
    scanf("%f", &valor_compra[x]);   
    printf("Digite o valor de venda do veiculo[%i]: \n", x+1);
    scanf("%f", &valor_venda[x]);   
    }
    
    printf("Modelos | valor de compra | valor de venda: \n");
    for (x=0; x<10; x++){ 
    printf("Modelo  | valor de compra | valor de venda[%i]: \n", x+1);
    printf("%s \t\t %.2f \t\t %.2f \n", valor_modelo[x], valor_compra[x], valor_venda[x]);   
    }

        
    media=calcula_media_compra (valor_compra);
    printf("Media de valores de compra dos veiculos: %.2f", media);

    printf("\nCarros que o valor de compra foi maior que o valor medio: \n");
    mostrar(valor_compra, media, valor_modelo);

    for ( x = 0; x < 10; x++){
        lu[x]=valor_venda[x]-valor_compra[x];
    }
    
    ordem (lu);


    return 0;
}