/*
1. Construa um programa que receba os dados de compras de um individuo. O sistema deve
receber Código da compra, descrição produto, quantidade e valor unitário (calcular o valor total).
Regras do sistema:
a. O programa deve solicitar para o usuário a informação do valor de limite das compras;
b. Só poderão ser lançadas compras dentro do limite informado;
c. O sistema deverá, ao final, apresentar os dados da compra de menor valor;
d. O sistema deverá apresentar a descrição e valor unitário do produto de maior valor(considerar valor unitário);
e. O sistema deverá apresentar o valor médio por compra;
f. Caso o usuário ultrapasse o limite de compras, o sistema deverá apresentar o valor negativo deste cliente.
*/
#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void){


int x = 35;
int y = 0;
float qdp[x], vu[x], vl; // qdp - quantidade do produto, vu - valor unitário, vl - valor limite de compras
char ddp [x][30];//descrição do produto
int cdc[x]; //cdc - código do produto


printf("Digite o valor maximo de seus compras: ");
scanf("%f", &vl);

while(vl > 0){
    printf("Valor disponivel: %.2f \n ", vl);

    printf("Digite a descricao do Produto: ");
    scanf("%s", &ddp[y]);

    printf("Digite o codigo do produto: ");
    scanf("%i", &cdc[y]);

    printf("Digite a quantidade do produto: ");
    scanf("%f", &qdp[y]);

    printf("Digite o valor do produto: ");
    scanf("%f", &vu[y]);

    vl = vl - qdp[y] * vu[y];
    x++;
    y++;

}
if (vl <= 0){
printf("Esgotou seu limite de compras");

}

return 0;

}