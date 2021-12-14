/*2. (4.0 pontos) Definir a estrutura cuja representação gráfica é dada a seguir, definir os
campos com os tipos básicos necessários.
Cadastro: nome | identidade | sexo | endereço
Endereço: Rua | numero | cidade | estado
a) Crie um vetor Cadastro com 5 elementos;
b) Crie uma função que encontre o número de pessoas do sexo masculino;
c) Imprima o nome da(s) pessoa(s) que mora na rua "Rua dos Bobos”.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct enderecos{
    char rua[50], cidade[20], estado[20];
    int numero;
};

struct cadastro{

    char nome[20], sexo;
    int identidade;
    struct enderecos endereco;

}cadastro[5];

char findman(){

    int machos=0;
    for(int y=0; y<5; y++){
        if(cadastro[y].sexo == 'M'){
            machos = machos +1;
        }
    }
    return machos;
}

int main(){
    int x, h;

    for(x=0; x<5; x++){

        printf("Cadastre o Nome: ");
        scanf("%s", &cadastro[x].nome);
        fflush(stdin);
        printf("Cadastre o sexo (M para masculino e F para feminino): ");
        scanf("%s", &cadastro[x].sexo);
        fflush(stdin);
        printf("Cadastre o numero de identidade: ");
        scanf("%i", &cadastro[x].identidade);
        fflush(stdin);
        printf("Cadastre o nome da rua: ");
        gets(cadastro[x].endereco.rua);
        fflush(stdin);
        printf("Cadastre o numero da rua: ");
        scanf("%i", &cadastro[x].endereco.numero);
        fflush(stdin);
        printf("Cadastre a cidade: ");
        scanf("%s", &cadastro[x].endereco.cidade);
        fflush(stdin);
        printf("Cadastre o estado: ");
        scanf("%s", &cadastro[x].endereco.estado);
        fflush(stdin);
    }

    h=findman();
    printf("O numero de pessoas do sexo masculino sao: %i\n", h);

    fflush(stdin);
    
    for(x=0; x<5; x++){
        if(strcmp(cadastro[x].endereco.rua, "rua dos bobos") == 0){
            printf("o %s vive na %s\n", cadastro[x].nome, cadastro[x].endereco.rua);
        }
    }

return 0;

}
