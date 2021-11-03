/*• Escolha do numero de jogadores (N - máximo 4 jogadores) -- OK
• Sortear e apresentar na tela as tabelas de cada jogador -- OK
• A tecla “enter” sorteia o número -- OK
• Marcar os acertos na tabela de cada jogador
• Identificar (duque, terno, quadra, quina e bingo)
• O jogo deve usar estruturas de LAÇO que permitam reiniciar o
jogo antes de finalizar o programa.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define VERMELHO    "\x1b[31m"
#define VERDE       "\x1b[32m"
#define AZUL        "\x1b[34m"
#define MAGENTA     "\033[95m"
#define AMARELO     "\033[33m"
#define CIANO       "\033[96m"
#define RESET       "\x1b[0m"

// matriz 5x5 com meio vazio
// trocar acertor por X

int players,numSorteado,x,y;
char cartela[5][5],player1[5][5],player2[5][5],player3[5][5],player4[5][5];


char geraMatriz(){

    for (x=0; x<5; x++){
        for (y=0; y<5; y++){
            cartela[x][y]=(rand() % 98)+1;
        }
    }
    for (x=0; x<5; x++){
        for (y=0; y<5; y++){
            if(x==2 && y==2){
                printf("%c \t",'X');
            }else{
                printf("%i \t",cartela[x][y]);
            }
        }
        printf("\n");
    }
    return cartela;
}

// gerador das cartelas
void cartPlayer1(){
    printf(AMARELO "============ CARTELA P1 ============\n");
    geraMatriz(player1);
    printf("============ ********** ============" RESET "\n");
}


void confereAcerto(){
    //for (x=0; x<5; x++){
       // for (y=0; y<5; y++){
         //   if(cartela[x][y]==numSorteado){
          //      cartela[x][y]="0";
          //  }
       // }
   // }
    for (x=0; x<5; x++){
        for (y=0; y<5; y++){
            printf("%i \t",cartela[x][y]);
        }
        printf("\n");
    }
}
void sorteiaEnter() {
    int tecla;

    do{
        tecla = getchar();

        // sorteio
        numSorteado = 1+ (rand()%99);
        printf("O numero sorteado foi: "VERMELHO "%i""\n" RESET,numSorteado);
        //fim sorteio

        if (tecla !=13) {
            printf("Pressione enter para sortear um numero \n");
        }
        confereAcerto(player1);

    } while(tecla != 13);
}



void mensagem_importante() {
    printf("cu de biceta\n\n");
    printf(VERDE "=========== BINGO EC11 ===========" RESET "\n");
    printf("Informe o numero de jogadores: (1 - 4): ");
    scanf("%i",&players);
    printf(VERDE "=========== ********** ===========" RESET "\n");
}

int main() {

    mensagem_importante();
    srand(time(NULL));
    
    switch (players){
        case 1:
            cartPlayer1();
            sorteiaEnter();
        


        break;
        case 2:
            printf(AMARELO "============ CARTELA P1 ============\n");
            geraMatriz(player1);
            printf("============ ********** ============" RESET "\n");
            printf(AZUL "============ CARTELA P2 ============\n");
            geraMatriz(player2);
            printf("============ ********** ============" RESET "\n");
            sorteiaEnter();




        break;
        case 3:
            printf(AMARELO "============ CARTELA P1 ============\n");
            geraMatriz(player1);
            printf("============ ********** ============\n" RESET "\n");
            printf(AZUL "============ CARTELA P2 ============\n");
            geraMatriz(player2);
            printf("============ ********** ============\n" RESET "\n");
            printf(MAGENTA "============ CARTELA P3 ============\n");
            geraMatriz(player3);
            printf("============ ********** ============\n" RESET "\n");
            sorteiaEnter();





        break;
        case 4: 
           printf(AMARELO "============ CARTELA P1 ============\n");
            geraMatriz(player1);
            printf("============ ********** ============\n" RESET "\n");
            printf(AZUL "============ CARTELA P2 ============\n");
            geraMatriz(player2);
            printf("============ ********** ============\n" RESET "\n");
            printf(MAGENTA "============ CARTELA P3 ============\n");
            geraMatriz(player3);
            printf("============ ********** ============\n" RESET "\n");
            printf(CIANO "============ CARTELA P4 ============\n");
            geraMatriz(player4);
            printf("============ ********** ============\n" RESET "\n");
            sorteiaEnter();





        break;
        default:
        
            printf("=========== ********** ===========\n");
            printf("Voce informou uma quantidade invalida de jogadores!\n");
            mensagem_importante();
            printf("=========== ********** ===========\n");
        break;
    }
    system("pause");
    return 0;
}


