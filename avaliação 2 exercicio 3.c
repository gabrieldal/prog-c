#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
float a=10, b=20, c=100, d=13;
int resp=1;
int i=2;
while (a%f==0 ||  b%f==0 || c%f==0 || d%f==0) {
        resp=resp+1;
        if (a%f==0) 
        {
            a=a/i;
        } 
        if (b%f==0) 
        {
            b=b/i;
        } 
        if (c%f==0) 
        {
            c=c/i;
        } 
        if (d%f==0) 
        {
            d=d/i;
        } 
        else {
            i=i+1;
        }
        if(a==1 && b==1 && c==1 && d==1) {
            break;
        } 
    }

    printf("Resposta : %i", resp);
    printf("\nFim do Programa!\n");
    system("pause");
    return 0;
}