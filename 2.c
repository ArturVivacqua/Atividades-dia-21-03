//Exercício 2:

#include <stdio.h>

int main(void) {
int estado;
float preco, precototal;
printf("\nQual o preço do produto?\t");
scanf("%f", &preco);
//A taxa de cada estado é: MG: 7%; DF: 10%; SP: 9%; RJ: 8%
  
printf("\nPara selecionar um estado, selecione o número respectivo:\t");
printf("\n1 - MG; 2 - DF; 3 - SP; 4 RJ\t");
printf("\nEm qual estado deseja comprar o produto?\t");
scanf("%d", &estado);

  switch(estado){
    case 1:
      precototal = (preco*0.07);
      printf("O valor total do produto será de: %.2f", precototal);
      break;
    case 2:
      precototal = (preco*0.1);
      printf("O valor total do produto será de: %.2f", precototal);
      break;
    case 3:
      precototal = (preco*0.09);
      printf("O valor total do produto será de: %.2f", precototal);
      break;
    case 4:
      precototal = (preco*0.08);
      printf("O valor total do produto será de: %.2f", precototal);
      break;
    default:
       printf("Estado inválido");
       break;
  }
  return 0;
}