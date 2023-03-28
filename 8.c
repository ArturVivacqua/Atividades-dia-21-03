//Exercício 8

#include <stdio.h>

int main(void) {
int cod1, cod2, cod3, cal1, cal2, cal3, caltotal;

printf("\nCARDÁPIO:\t");  

printf("\nPratos principais:\t");
printf("\n1 - Vegetariano\t");
printf("\n2 - Peixe\t");
printf("\n3 - Frango"); 
printf("\n4 - carne\t");

printf("\nSobremesas:\t");
printf("\n1 - Abacaxi\t");
printf("\n2 - Sorvete diet\t");
printf("\n3 - Mousse diet"); 
printf("\n4 - Mousse chocolate\t");

printf("\nBebidas:\t");
printf("\n1 - Chá\t");
printf("\n2 - Suco de laranja\t");
printf("\n3 - Suco de melão"); 
printf("\n4 - Refrigerante diet\t");

printf("\nDigite o prato desejado:\t");
scanf("%d", &cod1);
  
  switch(cod1){
    case 1:
      printf("Este prato tem 180 calorias");
      cal1 = 180;
      break;
    case 2:
      printf("Este prato tem 230 calorias");
      cal1 = 230;
      break;
    case 3:
      printf("Este prato tem 250 calorias");
      cal1 = 250;
      break;
    case 4:
      printf("Este prato tem 350 calorias");
      cal1 = 350;
      break;
    default:
      printf("Código inválido");
      break;
  }

printf("\nDigite a sobremesa desejada:\t");
scanf("%d", &cod2);
  
  switch(cod2){
    case 1:
      printf("Esta sobremesa tem 75 calorias");
      cal2 = 75;
      break;
    case 2:
      printf("Esta sobremesa tem 110 calorias");
      cal2 = 110;
      break;
    case 3:
      printf("Esta sobremesa tem 170 calorias");
      cal2 = 170;
      break;
    case 4:
      printf("Esta sobremesa tem 200 calorias");
      cal2 = 200;
      break;
    default:
      printf("Código inválido");
      break;
  }

printf("\nDigite a bebida desejada:\t");
scanf("%d", &cod3);
  
  switch(cod3){
    case 1:
      printf("Esta bebida tem 20 calorias");
      cal3 = 20;
      break;
    case 2:
      printf("Esta bebida tem 70 calorias");
      cal3 = 70;
      break;
    case 3:
      printf("Esta bebida tem 100 calorias");
      cal3 = 100;
      break;
    case 4:
      printf("Esta bebida tem 65 calorias");
      cal3 = 65;
      break;
    default:
      printf("Código inválido");
      break;
  }

caltotal = cal1 + cal2 + cal3;

  printf("\nA quantidade total de calorias da refeição é %d", caltotal);


  return 0;
}