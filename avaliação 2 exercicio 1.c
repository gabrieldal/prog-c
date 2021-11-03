/*Implemente um programa que receba e armazene 10 palavras. Ao final o sistema deverá imprimir
a lista de palavras na ordem que foi digitada
e a mesma lista de palavras ordenadas alfabeticamente em ordem crescente.*/

 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>

 int main(void){
     char palavras[10][20], aux[30];
     int i, x, y;
     float car[10];

     printf("Digite 10 palavras: \n");

    for (i = 0; i < 10; i++){
        printf("%i. ", i+1);
        gets(palavras[i]);
    }

    printf("\nLista das palavras: \n");

    for ( i = 0; i < 10; i++){ puts(palavras[i]); }
    for ( i = 0; i < 10; i++){ car[i] = strlen(palavras[i]); }
   
    printf("\nLista das palavras em ordem alfabética e crescente: \n");

    for ( i = 0; i < 10; i++){
        for(x = i+1; x<10; x++){
            y = strcmp (palavras[i], palavras[x]);
            if(y > 0) {
                strcpy(aux, palavras[i]);
                strcpy(palavras[i], palavras[x]);
                strcpy(palavras[x], aux);
            }
        }
    }
    for(i=0; i<10; i++){
        puts(palavras[i]);
    }

     return 0;
 }