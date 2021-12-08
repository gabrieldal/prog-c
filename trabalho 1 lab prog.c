#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int x, y;

struct banda{ //estrutura para informações das bandas

    char nome_banda[20][20], genero_musical[20][20];
    int integrantes, ranking;    

}bd[5];

int fav(){ //função para escolher o favorito

    int fv;
    printf("Digite a posicao de 1 a 5 da banda nos seus favoritos: ");
    scanf("%i", &fv);

    for(x=0; x<5; x++){
        if(fv == bd[x].ranking){ //igualando a variavel ranking para colocar a posicao certa
            printf("Nome da banda\t\tGenero\t\tn. de integrantes\t\tRanking\n");
            printf("%s \t\t %s \t\t\t %i \t\t\t %i \n\n", bd[x].nome_banda, bd[x].genero_musical, bd[x].integrantes, bd[x].ranking);
        }
    }

return 0;
}

int song(){//função para escolher o tipo de música

    char sg[20][20];
    printf("Digite o genero musical: ");
    scanf("%s", &sg);

    for(x=0; x<5; x++){
        if(strcmp(sg,bd[x].genero_musical) == 0){//comparando as palavras, aplicando a condição que se forem iguais, escreve na tela
            
            printf("Nome da banda\t\tGenero\t\tn. de integrantes\t\tRanking\n");
            printf("%s \t\t %s \t\t\t %i \t\t\t %i \n\n", bd[x].nome_banda, bd[x].genero_musical, bd[x].integrantes, bd[x].ranking);

        }
    }

return 0;
}

int band_fav(){// função para chamar o nome da banda e dizer se está ou não nos favoritos

    char bf[20][20];
    int b=0;
    printf("Digite o nome da banda que deseja saber se esta nos favoritos: ");
    scanf("%s", &bf);

     for(x=0; x<5; x++){
        if(strcmp(bf,bd[x].nome_banda) == 0){// definindo um valor para quando a banda esta nos favoritos
            b=1; 
        }    
    }

    if(b == 1){//fora do FOR, assim consegue colocar a mensagem que não está nos favoritos
        printf("Sua banda esta entre seus favoritos\n");
    }
        else{
            printf("Sua banda nao esta entre seus favoritos\n");
        }
    
         
return 0;
}

int main(){

int choise;

    for(x=0; x<5; x++){ // coletar as informações das 5 bandas
        printf("Digite o nome da banda: ");
        gets(bd[x].nome_banda);
        printf("Digite o genero musical: ");
        gets(bd[x].genero_musical);
        printf("Digite o numero de integrantes: ");
        scanf("%i", &bd[x].integrantes);
        printf("Digite a posicao da banda nos seus favoritos: ");
        scanf("%i", &bd[x].ranking);
        fflush(stdin);
    }
    
    for(y=0; y<5; y++){ // mostrar as informações coletadas
        printf("Nome da banda\t\tGenero\t\tn. de integrantes\t\tRanking\n");
        printf("%s \t\t %s \t\t\t %i \t\t\t %i \n\n", bd[y].nome_banda,bd[y].genero_musical,bd[y].integrantes, bd[y].ranking);
        fflush(stdin);
    }

    

while(choise!=4){

    printf("/// MENU /// \n");
    printf("1. Informacoes da Banda pelo Ranking de favoritos \n");
    printf("2. Consulta por genero musical \n");
    printf("3. Saber se esta nos favoritos por genero musical \n");
    printf("4. Sair \n");
    printf("Opção: \n");
    scanf("%i", &choise);

switch (choise){

    case 1:
    fav();//chamando a função de selecionar os favoritos
    fflush(stdin);
    break;

    case 2:
    song();//chamando a função de selecionar o tipo de musica
    fflush(stdin);
    break;

    case 3:
    band_fav();//chamando a função de selecionar a banda e verificar se está ou não nos favoritos
    fflush(stdin);
    break;

    case 4:// Sair
    printf("\nSAINDO DO SISTEMA !!!\n");
    fflush(stdin);
    break;

    default:
    printf("Opção Inválida!");
}

}
return 0;

}
