#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main(){
  char desc[10][20], cd[20];
  float vend[10][4], cons, ti=0, tg=0, mg=0, vet[10], troca;
  int x, y=0, op=0;
  srand(time(NULL));

  for(x=0; x<10; x++){
    printf("Prod: %i \n", x+1);
    printf("Desc: ");
    scanf("%s", desc[x]);
    vend[x][0]=rand()%50;
    vend[x][1]=rand()%100;
    vend[x][2]=rand()%1000;
    vend[x][3]=vend[x][1]*vend[x][2];
    vet[x]=vend[x][3];
    printf("Registro: \n");
    printf("cod [%.0f] \t desc [%s] \t Qtd [%.0f] \t VU [%.2f] \t Tot [%.2f] \n",vend[x][0], desc[x], vend[x][1], vend[x][2], vend[x][3]);
  }
  while(op!=6){
  printf("/// MENU /// \n");
  printf("1. Listas todas as compras \n");
  printf("2. Consulta por código \n");
  printf("3. Consulta por descrição \n");
  printf("4. Valor médio das compras por item \n");
  printf("5. Listar valores totais em ordem crescente \n");
  printf("6. Sair \n");
  printf("Opção: ");
  scanf("%i", &op);

  switch(op){
    case 1: //Lista itens
        printf("Cód \t Desc \t Qtd \t VU \t Tot \n");
        for(x=0; x<10; x++){
          printf("%.0f \t %s \t %.0f \t %.2f \t %.2f \n",vend[x][0], desc[x], vend[x][1], vend[x][2], vend[x][3]);
          
        }
        break;
    
    case 2: // Consulta por código
        printf("Digite o código para consulta: ");
        scanf("%f", &cons);
        for(x=0; x<10; x++){
          if(vend[x][0]==cons){
            printf("Registro: \n %.0f \t %s \t %.0f \t %.2f \t %.2f \n",vend[x][0], desc[x], vend[x][1], vend[x][2], vend[x][3]);
            y=1;
          }
        }
        if (y==0){
          printf("Código não cadastrado!!! \n");
        }
        break; 
        
    case 3: // Consulta por descrição
        printf("Digite descrição para consulta: ");
        scanf("%s", cd);
        
        for(x=0; x<10; x++){
          if(strcmp(cd, desc[x])==0){
            printf("Registro: \n %.0f \t %s \t %.0f \t %.2f \t %.2f \n",vend[x][0], desc[x], vend[x][1], vend[x][2], vend[x][3]);
            y=1;
          }
        }
        if (y==0){
          printf("Produto não cadastrado!!! \n");
        }
        break;
    
    case 4: // Preço médio Item
               
        for(x=0; x<10; x++){
          ti= ti + vend[x][1];
          tg= tg +vend[x][3];
        }
        mg=tg/ti;
        printf("Média valor por item [%.2f] \n", mg);
        
        break;
    
    case 5: // Ordenar valores totais
               
        for(x=0; x<10; x++){
          for(y=0; y<10; y++){
            if(vet[x]<vet[y]){
              troca=vet[y];
              vet[y]=vet[x];
              vet[x]=troca;
            }
          }
        }
        for(x=0; x<10; x++){
          printf("[%i]  %.2f \n", x+1, vet[x]);
        }
        
        break;
    case 6: // Sair
       printf("\n SAINDO DO SISTEMA !!!\n");
       break;

    default:
        printf("Opção Inválida!");
 }
 }
  
  return 0;
}