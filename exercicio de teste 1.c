/*Faça um programa que receba o nome completo e salário de um funcionário, calcule e mostre o
nome e novo salário, sabendo-se que este sofreu um aumento de 25%. */


#include<stdio.h>
#include<string.h>

int main(void) {
char nome[20];
float sal, aum;

printf("Digite o nome do funcionario: \n");
gets(nome);
printf("Digite o salario do funcionario: \n");
scanf("%f", &sal);

aum = sal*1.25;

printf("Salario atualizado de %s e %.2f: \n", nome, aum);

return 0;

}