/*2 - Defina a função conta que recebe como argumentos uma lista de números inteiros w e um número inteiro k
 e devolve o número de vezes que k ocorre em w.
Entrada:
conta([1,2,3,2,1,2],2)
Saída = 3*/

#include <stdio.h>
#include <stdlib.h>

int conta(int w[6], int k, int tam, int a){
  if(tam==0){
    return a;
    } else {
    if(k==w[tam-1]){
    return conta(w, k, tam-1, a+1);
    } else {
    return conta(w, k, tam-1, a);
    }
  }
}

int main(){
  
int v[6], d, x, b;

printf("Digite em sequencia os numeros do vetor: ");

  for(d=0; d<6; d++){
    scanf("%i", &v[d]);
  }
printf("Digite um numero para contar quantas vezes vai aparecer no vetor: ");
scanf("%i", &x);

b = conta(v, x, 6, 0);

printf("Repetiu %i vezes", b);

return 0;

}