#include <stdio.h>

float area (float raio){
    float Rarea;
    Rarea=3.14*(raio+raio);
    return Rarea;
}
float perimetro (float raio){
    float Rperimetro;
    Rperimetro=3.14*2*raio;
    return Rperimetro;
}
int main(void){

    float r;
    int op;
    r=0;

    do{
        printf("\nInforma o raio do circulo: ");
        scanf("%f",&r);
        printf("\nAgora escolha uma opcao: \n");
        printf("1 - Calcular area do circulo\n");
        printf("2 - Calcular o perimetro do circulo\n");
        printf("3 - Sair do programa\n");
        printf("Opcao desejada: ");
        scanf("%i",&op);

        switch (op){
            case 1:
                printf("\nArea do circulo: %.2f",area(r));
            break;
            case 2:
                printf("\nPerimetro do circulo: %.2f",perimetro(r));
            break;
            case 3:
                printf("\nVoce saiu do programa");
                return 0;
            break;
            default:
                printf("Voce informou uma opcao invalida");
            break;
        }
    }while(op!=3);

    return 0;
}