#include <stdio.h>

int main(void) {
  float tc1, tc2, tc3, tc4, tf1, tf2, tf3, tf4, p1, p2, p3, p4;
  int menus;
  tc1=tc2=tc3=tc4=tf1=tf2=tf3=tf4=p1=p2=p3=p4=0;

  printf("informe a temperatura da manha: ");
  scanf("%f", &tc1);
  printf("informe a temperatura da tarde: ");
  scanf("%f", &tc2);
  printf("informe a temperatura da noite: ");
  scanf("%f", &tc3);
  printf("informe a temperatura da madrugada: ");
  scanf("%f", &tc4);
  printf("\n");
  printf("***** MENU *****\n");
  printf("1 - Temperaturas em Fahrenheit (ºF)\n");
  printf("2 - Menor temperatura do dia (ºC)\n");
  printf("3 - Listagem das temperaturas em ºF (ordem crescente)\n");
  printf("****************************");
  printf("\n");
  printf("escolha uma opção: \n");
  scanf("%i", &menus);

  
  switch (menus) {
    case 1:
    tf1 = (tc1*9)/5+32;
    tf2 = (tc2*9)/5+32;
    tf3 = (tc3*9)/5+32;
    tf4 = (tc4*9)/5+32;
    printf("%.2f\n", tf1);
    printf("%.2f\n", tf2);
    printf("%.2f\n", tf3);
    printf("%.2f\n", tf4);
    break;

    case 2:
    if (tc1<tc2 && tc1<tc3 && tc1<tc4){
    printf("A menor temperatura do dia é na manha %.2f Cº \n", tc1);
  }
    if (tc1>tc2 && tc2<tc3 && tc2<tc4){
    printf("A menor temperatura do dia é na tarde %.2f Cº \n", tc2);
  }
    if (tc1>tc3 && tc2>tc3 && tc3<tc4){
    printf("A menor temperatura do dia é na noite %.2f Cº \n", tc3);
  }
    if (tc1>tc4 && tc4<tc3 && tc2>tc4){
    printf("A menor temperatura do dia é na madrugada %.2f Cº \n", tc4);
  }
    break;

    case 3:

    tf1 = (tc1*9)/5+32;
    tf2 = (tc2*9)/5+32;
    tf3 = (tc3*9)/5+32;
    tf4 = (tc4*9)/5+32;

    if(tf1>tf2 && tf1>tf3 && tf1>tf4){
      p1=tf1;
      if(tf2>=tf3 && tf2>=tf4){
        p2=tf2;
        if(tf3>=tf4){
          p3=tf3;
          p4=tf4;
        }
        else{
          p3=tf4;
          p4=tf3;
        }
      }
      if(tf3>=tf2 && tf3>=tf4){
        p2=tf3;
        if(tf2>=tf4){
          p3=tf2;
          p4=tf4;
        }
        else{
          p3=tf4;
          p4=tf2;
        }
      }
      if(tf4>=tf2 && tf4>=tf3){
        p2=tf4;
        if(tf2>=tf3){
          p3=tf2;
          p4=tf3;
        }
        else{
          p3=tf3;
          p4=tf2;
        }
      }
    }






    if(tf2>tf1 && tf2>tf3 && tf2>tf4){
      p1=tf2;
      if(tf1>=tf3 && tf1>=tf4){
        p2=tf1;
        if(tf3>=tf4){
          p3=tf3;
          p4=tf4;
        }
        else{
          p3=tf4;
          p4=tf3;
        }
      }
      if(tf3>=tf1 && tf3>=tf4){
        p2=tf3;
        if(tf1>=tf4){
          p3=tf1;
          p4=tf4;
        }
        else{
          p3=tf4;
          p4=tf2;
        }
      }
      if(tf4>=tf1 && tf4>=tf3){
        p2=tf4;
        if(tf1>=tf3){
          p3=tf1;
          p4=tf3;
        }
        else{
          p3=tf3;
          p4=tf1;
        }
      }
    }



    if(tf3>tf2 && tf3>tf1 && tf3>tf4){
      p1=tf3;
      if(tf2>=tf3 && tf2>=tf4){
        p2=tf2;
        if(tf1>=tf4){
          p3=tf1;
          p4=tf4;
        }
        else{
          p3=tf4;
          p4=tf1;
        }
      }
      if(tf1>=tf2 && tf1>=tf4){
        p2=tf3;
        if(tf2>=tf4){
          p3=tf2;
          p4=tf4;
        }
        else{
          p3=tf4;
          p4=tf2;
        }
      }
      if(tf4>=tf2 && tf4>=tf1){
        p2=tf4;
        if(tf2>=tf1){
          p3=tf2;
          p4=tf1;
        }
        else{
          p3=tf1;
          p4=tf2;
        }
      }
    }



        if(tf4>tf2 && tf4>tf3 && tf4>tf1){
      p1=tf4;
      if(tf2>=tf3 && tf2>=tf1){
        p2=tf2;
        if(tf3>=tf1){
          p3=tf3;
          p4=tf1;
        }
        else{
          p3=tf1;
          p4=tf3;
        }
      }
      if(tf3>=tf2 && tf3>=tf1){
        p2=tf3;
        if(tf2>=tf1){
          p3=tf2;
          p4=tf1;
        }
        else{
          p3=tf1;
          p4=tf2;
        }
      }
      if(tf1>=tf2 && tf1>=tf3){
        p2=tf1;
        if(tf2>=tf3){
          p3=tf2;
          p4=tf3;
        }
        else{
          p3=tf3;
          p4=tf2;
        }
      }
    }
  printf("%.2f, %.2f, %.2f, %.2f", p4,p3,p2,p1);

    break;
  }
  



  return 0;
}