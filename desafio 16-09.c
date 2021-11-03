/* 
Implemente um sistema para o armazenamento de números. Este software poderá armazenar até 100
valores em sua estrutura. O seguinte menu deverá ser disponibilido para o usuário:

*** MENU***
1. Inserir valor
2. Listar Valores
3. Sair

Requisitos:
* o sistema deverá permanecer no menu, até a opção Sair ser escolhida.
* O usuário poderá inserir valores a qualquer momento, sem perder valores já informados.
*/

#include<stdio.h>
#include<stdlib.h>


int main(void){
float v[100];
int op, x, y, s, c;
x=op=0;
y=1;

while(op!=3){

    printf("***MENU***\n ");
    printf("1. Inserir valores\n ");
    printf("2. Listar os valores digitados\n ");
    printf("3. Sair\n ");
    printf("Opção: \n ");
    scanf("%i", &op);

 switch(op){

    case 1: //informar valores

    printf("Digite 0 para parar\n");  
      
    while(s!=0){

    printf("Informe os valores[%i]: \n", y+1);
    scanf("%f", &v[y]);
    s = v[y];
    y++;
    c = y;
    }

    break;

    case 2: //listar os valores
    printf("Valores digitados: \t");
    for(x=0; x<c; x++){
    printf("%.0f\n", v[x]);
    }

    break;

    case 3: //sair
    printf("\n ***SAINDO DO SISTEMA*** \n");

    break;

    default:
    printf("Opção Inválida!");
    }
}
    return 0;
}
