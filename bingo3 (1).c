/*• Escolha do numero de jogadores (N - máximo 4 jogadores) -- OK
• Sortear e apresentar na tela as tabelas de cada jogador -- OK
• A tecla “enter” sorteia o número -- OK
• Marcar os acertos na tabela de cada jogador -- OK
• Identificar (duque, terno, quadra, quina e bingo)
• O jogo deve usar estruturas de LAÇO que permitam reiniciar o
jogo antes de finalizar o programa.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

//cores
#define VERMELHO    "\x1b[31m"
#define VERDE       "\x1b[32m"
#define AZUL        "\x1b[34m"
#define MAGENTA     "\033[95m"
#define AMARELO     "\033[33m"
#define CIANO       "\033[96m"
#define RESET       "\x1b[0m"

//estados do numero sorteado
#define VALIDO   1
#define INVALIDO 0

//Variaveis globais
int players, numSorteados[99], contaSorteados=0, proxSorteado=0, numSorteado, contaAcertos[4]={0,0,0,0}, BINGO[4]={0,0,0,0}, winner[4]={0,0,0,0}, gameover=0;
char cartela[4][5][5];


int Sorteio(int x) {
    int status;

    while(proxSorteado < contaSorteados) {

        do {
            numSorteados[proxSorteado] = (rand() % 98)+1;
            status = VALIDO;
            for (int j = 0; j < proxSorteado; j++) {
                if (numSorteados[proxSorteado] == numSorteados[j]) {
                    status = INVALIDO;
                }
            }
        } while (status == INVALIDO);
        /*print pra ver o vetor inteiro dos numeros ja sorteados
        for (int u = 0; u <= proxSorteado; u++)
        {
            printf("%d ", numSorteados[u]);
        }
        */
       x = numSorteados[proxSorteado];
       proxSorteado++;
    }
    return x;
}
int confereAcertos (int i) {
    
    switch (i)
    {
    case 1:
        for (int x=0; x<i; x++) {
            for (int y=0; y<5; y++) {
                for (int z=0; z<5; z++) {
                    if(cartela[x][y][z]==numSorteado) {
                        cartela[x][y][z]=0;
                        contaAcertos[x]+=1;
                    }
                }
            }
        }
        for (int x=0; x<i; x++) {
            for (int y=0; y<5; y++) {
                for (int z=0; z<1; z++) {
                    if(cartela[x][y][z]==0 && cartela[x][y][z+1]==0 && cartela[x][y][z+2]==0 && cartela[x][y][z+3]==0 && cartela[x][y][z+4]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }else if (cartela[x][z][y]==0 && cartela[x][z+1][y]==0 && cartela[x][z+2][y]==0 && cartela[x][z+3][y]==0 && cartela[x][z+4][y]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }else if (cartela[x][0][0]==0 && cartela[x][1][1]==0 && cartela[x][2][2]==0 && cartela[x][3][3]==0 && cartela[x][4][4]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }else if (cartela[x][0][4]==0 && cartela[x][1][3]==0 && cartela[x][2][2]==0 && cartela[x][3][1]==0 && cartela[x][4][0]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }
                }
            }
        }
        printf(AMARELO "============ CARTELA P1 ============\n");
        for (int x=0; x<5; x++){
            for (int y=0; y<5; y++){
              printf("%i \t",cartela[0][x][y]);
            }
            printf("\n");
        }
        printf("============ ********** ============" RESET "\n");
        printf("Acerto do P1: %i\n",contaAcertos[0]);
        if (BINGO[i-1]==1) {
            printf("P1 fez BINGO!!!\n");
        }
    break;
    
    case 2:
        for (int x=0; x<i;x++) {
            for (int y=0; y<5; y++) {
               for (int z=0; z<5; z++) {
                    if(cartela[x][y][z]==numSorteado) {
                        cartela[x][y][z]=0;
                        contaAcertos[x]+=1;
                    }
                }
            }
        }
        for (int x=0; x<i; x++) {
            for (int y=0; y<5; y++) {
                for (int z=0; z<1; z++) {
                    if(cartela[x][y][z]==0 && cartela[x][y][z+1]==0 && cartela[x][y][z+2]==0 && cartela[x][y][z+3]==0 && cartela[x][y][z+4]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }else if (cartela[x][z][y]==0 && cartela[x][z+1][y]==0 && cartela[x][z+2][y]==0 && cartela[x][z+3][y]==0 && cartela[x][z+4][y]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }else if (cartela[x][0][0]==0 && cartela[x][1][1]==0 && cartela[x][2][2]==0 && cartela[x][3][3]==0 && cartela[x][4][4]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }else if (cartela[x][0][4]==0 && cartela[x][1][3]==0 && cartela[x][2][2]==0 && cartela[x][3][1]==0 && cartela[x][4][0]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }
                }
            }
        }
        printf(AMARELO "============ CARTELA P1 ============\n");
        for (int x=0; x<5; x++){
            for (int y=0; y<5; y++){
                printf("%i \t",cartela[0][x][y]);
            }
            printf("\n");
        }
        printf("============ ********** ============" RESET "\n");
        printf("Acerto do P1: %i\n",contaAcertos[0]);
        if (BINGO[0]==1) {
            printf("P1 fez BINGO!!!\n");
        }
        printf(AZUL "============ CARTELA P2 ============\n");
        for (int x=0; x<5; x++){
            for (int y=0; y<5; y++){
                printf("%i \t",cartela[1][x][y]);
            }
            printf("\n");
        }
        printf("============ ********** ============" RESET "\n");
        printf("Acerto do P2: %i\n",contaAcertos[1]);
        if (BINGO[1]==1) {
            printf("P2 fez BINGO!!!\n");
        }
    break;
    
    case 3:
        for (int x=0; x<i;x++) {
            for (int y=0; y<5; y++) {
               for (int z=0; z<5; z++) {
                    if(cartela[x][y][z]==numSorteado) {
                        cartela[x][y][z]=0;
                        contaAcertos[x]+=1;
                    }
                }
            }
        }
        for (int x=0; x<i; x++) {
            for (int y=0; y<5; y++) {
                for (int z=0; z<1; z++) {
                    if(cartela[x][y][z]==0 && cartela[x][y][z+1]==0 && cartela[x][y][z+2]==0 && cartela[x][y][z+3]==0 && cartela[x][y][z+4]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }else if (cartela[x][z][y]==0 && cartela[x][z+1][y]==0 && cartela[x][z+2][y]==0 && cartela[x][z+3][y]==0 && cartela[x][z+4][y]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }else if (cartela[x][0][0]==0 && cartela[x][1][1]==0 && cartela[x][2][2]==0 && cartela[x][3][3]==0 && cartela[x][4][4]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }else if (cartela[x][0][4]==0 && cartela[x][1][3]==0 && cartela[x][2][2]==0 && cartela[x][3][1]==0 && cartela[x][4][0]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }
                }
            }
        }
        printf(AMARELO "============ CARTELA P1 ============\n");
        for (int x=0; x<5; x++){
            for (int y=0; y<5; y++){
                printf("%i \t",cartela[0][x][y]);
            }
            printf("\n");
        }
        printf("============ ********** ============" RESET "\n");
        printf("Acerto do P1: %i\n",contaAcertos[0]);
        if (BINGO[0]==1) {
            printf("P1 fez BINGO!!!\n");
        }
        printf(AZUL "============ CARTELA P2 ============\n");
        for (int x=0; x<5; x++){
            for (int y=0; y<5; y++){
                printf("%i \t",cartela[1][x][y]);
            }
            printf("\n");
        }
        printf("============ ********** ============" RESET "\n");
        printf("Acerto do P2: %i\n",contaAcertos[1]);
        if (BINGO[1]==1) {
            printf("P2 fez BINGO!!!\n");
        }
        printf(MAGENTA "============ CARTELA P3 ============\n");
        for (int x=0; x<5; x++){
            for (int y=0; y<5; y++){
                printf("%i \t",cartela[2][x][y]);
            }
            printf("\n");
        }
        printf("============ ********** ============" RESET "\n");
        printf("Acerto do P3: %i\n",contaAcertos[2]);
        if (BINGO[2]==1) {
            printf("P3 fez BINGO!!!\n");
        }
    break;

    case 4:
        for (int x=0; x<i;x++) {
            for (int y=0; y<5; y++) {
                for (int z=0; z<5; z++) {
                    if(cartela[x][y][z]==numSorteado) {
                    cartela[x][y][z]=0;
                    contaAcertos[x]+=1;
                    }
                }
            }
        }
        for (int x=0; x<i; x++) {
            for (int y=0; y<5; y++) {
                for (int z=0; z<1; z++) {
                    if(cartela[x][y][z]==0 && cartela[x][y][z+1]==0 && cartela[x][y][z+2]==0 && cartela[x][y][z+3]==0 && cartela[x][y][z+4]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }else if (cartela[x][z][y]==0 && cartela[x][z+1][y]==0 && cartela[x][z+2][y]==0 && cartela[x][z+3][y]==0 && cartela[x][z+4][y]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }else if (cartela[x][0][0]==0 && cartela[x][1][1]==0 && cartela[x][2][2]==0 && cartela[x][3][3]==0 && cartela[x][4][4]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }else if (cartela[x][0][4]==0 && cartela[x][1][3]==0 && cartela[x][2][2]==0 && cartela[x][3][1]==0 && cartela[x][4][0]==0) {
                        BINGO[x]=1;
                        winner[x]=1;
                    }
                }
            }
        }
        printf(AMARELO "============ CARTELA P1 ============\n");
        for (int x=0; x<5; x++){
            for (int y=0; y<5; y++){
                printf("%i \t",cartela[0][x][y]);
            }
            printf("\n");
        }
        printf("============ ********** ============" RESET "\n");
        printf("Acerto do P1: %i\n",contaAcertos[0]);
        if (BINGO[0]==1) {
            printf("P1 fez BINGO!!!\n");
        }
        printf(AZUL "============ CARTELA P2 ============\n");
        for (int x=0; x<5; x++){
            for (int y=0; y<5; y++){
                printf("%i \t",cartela[1][x][y]);
            }
            printf("\n");
        }  
        printf("============ ********** ============" RESET "\n");
        printf("Acerto do P2: %i\n",contaAcertos[1]);
        if (BINGO[1]==1) {
            printf("P2 fez BINGO!!!\n");
        }
        printf(MAGENTA "============ CARTELA P3 ============\n");
        for (int x=0; x<5; x++){
            for (int y=0; y<5; y++){
                printf("%i \t",cartela[2][x][y]);
            }
            printf("\n");
        }
        printf("============ ********** ============" RESET "\n");
        printf("Acerto do P3: %i\n",contaAcertos[2]);
        if (BINGO[2]==1) {
            printf("P3 fez BINGO!!!\n");
        }
        printf(CIANO "============ CARTELA P4 ============\n");
        for (int x=0; x<5; x++){
            for (int y=0; y<5; y++){
                printf("%i \t",cartela[3][x][y]);
            }
            printf("\n");
        }
        printf("============ ********** ============" RESET "\n");
        printf("Acerto do P4: %i\n",contaAcertos[3]);
        if (BINGO[3]==1) {
            printf("P4 fez BINGO!!!\n");
        }
    break;

    }
    return 0;
}
int sorteiaEnter(int i) {
    int tecla, x;
    
    printf("Pressione enter para sortear um numero | Numeros ja sorteados: %i\n",contaSorteados);
    scanf("%c", &tecla);
    
    while(winner[0]!=1 && winner[1]!=1 && winner[2]!=1 && winner[3]!=1){
        tecla = getchar();
        if (tecla !=0) {

            //limpa tela
            system("cls");
            //conta numeros sorteados
            contaSorteados+=1;
            printf("Pressione enter para sortear um novo numero | Numeros ja sorteados: %i\n",contaSorteados);
            // sorteio
            numSorteado = Sorteio(x);
            printf("\nO numero sorteado foi: %i\n\n",numSorteado);
            //fim sorteio

            confereAcertos(players);
        }
    } 
    return 0;
}
char geraMatriz(char i) {
    i-=1;
    for (int x=0; x<5; x++){
        for (int y=0; y<5; y++){
            cartela[i][x][y]=(rand() % 98)+1;
        }
    }
    for (int x=0; x<5; x++){
        for (int y=0; y<5; y++){
            if(x==2 && y==2){
                cartela[i][x][y]=0;
            }
            printf("%i \t",cartela[i][x][y]);
        }
        printf("\n");
    }
    return 0;
}
void mensagem_importante() {
    system("cls");
    do
    {
        printf(VERDE "=========== BINGO EC11 ===========" RESET "\n");
        printf("Informe o numero de jogadores: (1 - 4): ");
        scanf("%i",&players);
        printf(VERDE "=========== ********** ===========" RESET "\n");

        //mensagem se informar numero de jogadores incorreto
        if(players>4 || players <1){
            system("cls");
            printf(VERMELHO "\t=========== ********** ===========\n");
            printf("Voce informou uma quantidade invalida de jogadores!\n");
            printf("\t=========== ********** ==========="RESET"\n");
        }
    }while(players>4 || players <1);
}

int main() {

    srand(time(NULL));
   
    while (gameover == 0) {

    mensagem_importante();
        
    switch (players){
        case 1:
            system("cls");
            printf(VERMELHO "***************** CARTELAS GERADAS *****************" RESET "\n");
            printf(AMARELO "============ CARTELA P1 ============\n");
                geraMatriz(1);
            printf("============ ********** ============" RESET "\n");
            printf(VERMELHO "***************** COMECANDO SORTEIO *****************" RESET "\n");

            sorteiaEnter(players);
            
        break;
        case 2:
            system("cls");
            printf(VERMELHO "***************** CARTELAS GERADAS *****************" RESET "\n");
            printf(AMARELO "============ CARTELA P1 ============\n");
                geraMatriz(1);
            printf("============ ********** ============" RESET "\n");
            printf(AZUL "============ CARTELA P2 ============\n");
                geraMatriz(2);
            printf("============ ********** ============" RESET "\n");
            printf(VERMELHO "***************** COMECANDO SORTEIO *****************" RESET "\n");

            sorteiaEnter(players);
            
        break;
        case 3:
            system("cls");
            printf(VERMELHO "***************** CARTELAS GERADAS *****************" RESET "\n");
            printf(AMARELO "============ CARTELA P1 ============\n");
                geraMatriz(1);
            printf("============ ********** ============" RESET "\n");
            printf(AZUL "============ CARTELA P2 ============\n");
                geraMatriz(2);
            printf("============ ********** ============" RESET "\n");
            printf(MAGENTA "============ CARTELA P3 ============\n");
                geraMatriz(3);
            printf("============ ********** ============" RESET "\n");
            printf(VERMELHO "***************** COMECANDO SORTEIO *****************" RESET "\n");

            sorteiaEnter(players);
            
        break;
        case 4: 
            system("cls");
            printf(VERMELHO "***************** CARTELAS GERADAS *****************" RESET "\n");
            printf(AMARELO "============ CARTELA P1 ============\n");
                geraMatriz(1);
            printf("============ ********** ============" RESET "\n");
            printf(AZUL "============ CARTELA P2 ============\n");
                geraMatriz(2);
            printf("============ ********** ============" RESET "\n");
            printf(MAGENTA "============ CARTELA P3 ============\n");
                geraMatriz(3);
            printf("============ ********** ============" RESET "\n");
            printf(CIANO "============ CARTELA P4 ============\n");
                geraMatriz(4);
            printf("============ ********** ============" RESET "\n");
            printf(VERMELHO "***************** COMECANDO SORTEIO *****************" RESET "\n");
            
            sorteiaEnter(players);
            
        break;
    }
    printf(VERMELHO "\t=========== ********** ===========\n");
    printf("Deseja reiniciar o jogo? (0=SIM - 1=NAO): "RESET);
    scanf("%i", &gameover);

    if (gameover == 0) {
        for (int i = 0; i < 4; i++) {
            BINGO[i]=0;
            winner[i]=0;
            contaAcertos[i]=0;
        }
        for (int i = 0; i < 99; i++) {
            numSorteados[i]=0;
        }
        contaSorteados=0;
        proxSorteado=0;
    }
    
    }

    system("cls");
    printf(VERMELHO"Fim de jogo!\n"RESET);
    system("pause");
    return 0;
}
