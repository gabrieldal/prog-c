/*Implemente um programa que, através da passagem de parâmetros, realize as funções para o seguinte menu:

 << CALCULADORA GERAL >>
1. Calculo da Hipotenusa
2. Área do Cilindro (área total)
3. Distância > R$
4. Sair

 Requisitos:

* O sistema só deverá ser encerrado ao digitar a opção 4.
* Para cada opção o sistema deverá passar parâmetros para uma função específica.
* Os resultados deverão ser apresentados ao usuário através de Procedimentos específicos para isso.
* Não devem ser utilizadas variáveis globais.
* No item 3 a resposta deverá ser o custo em reais para se realizar um determinado trajeto de carro,
 conhecendo-se a distância, consumo do veículo e valor do combustível.*/

 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>


float hipo(float cat1, float cat2){

float hipot;

hipot = sqrt(pow(cat1, 2) + pow(cat2, 2));

return hipot;

}
float cilindro(float raio, float altura, float area_base, float p, float area_lateral){

float area_total;


area_base = p * pow(raio, 2);

area_lateral = 2*p*(raio*altura);

area_total = 2*area_base + area_lateral;


return area_total;

}
float viagem(float distancia, float consumo, float valor_gasol){
float valor_viagem;

valor_viagem = (distancia/consumo)*valor_gasol;

return valor_viagem;
}

int main(){

    int op;
    float c1, c2, r, al, ab, p=3.14, dis, con, vg;

    while (op != 4){

        printf("<< CALCULADORA GERAL >>\n");
        printf("1. Calculo da Hipotenusa\n");
        printf("2. Área do Cilindro (área total)\n");
        printf("3. Distância > R$\n");
        printf("4. Sair\n");
        printf("<<<<<<<<<<<X>>>>>>>>>>>\n");
        printf("Escolha sua opcao: \n");
        scanf("%i", &op);
        printf("\n");

        switch(op){

            case 1:

            printf("Digite o primeiro cateto: ");
            scanf("%f", &c1);
            printf("Digite o segundo cateto: ");
            scanf("%f", &c2);
            printf("Valor da Hipotenusa: %.2f\n", hipo(c1, c2));
            printf("\n");

            break;

            case 2:

            printf("Digite o valor do Raio: \n");
            scanf("%f", &r);
            printf("Digite o valor da Altura: \n");
            scanf("%f", &al);
            printf("O valor da area total do cilindro é: %.2f\n", cilindro(r, al, ab, p, al));
            printf("\n");

            break;

            case 3:

            printf("Qual a distancia de sua Viagem: ");
            scanf("%f", &dis);
            printf("Quanto seu carro faz por litro: ");
            scanf("%f", &con);
            printf("Qual o valor do combustivel usado: ");
            scanf("%f", &vg);
            printf("Valor da Viagem: R$%.2f\n", viagem(dis, con, vg));
            printf("\n");

            break;

            case 4:

            printf("Encerrando o programa!\n");

            break;

            default:
            break;
        }
    }
    return 0; 
}