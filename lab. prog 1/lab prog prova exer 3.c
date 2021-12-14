/*3. (3.0 pontos) Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
S = 1³ + 2³ + … + n³ e apresente ao usuário o resultado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calc(int x, int subcalc){
    if(x>0){
        subcalc = subcalc+pow(x,3);
        return calc(x-1, subcalc);
    } else {
        return subcalc;
    }
}

int main(){

    int y, z;
    printf("Digite um numero para realizar o calculo dos cubos: ");
    scanf("%i", &y);

    z = calc(y,0);

    printf("O resultado do calculo e: %i", z);

return 0;

}