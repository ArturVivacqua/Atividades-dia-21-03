//Exercício 7

#include <stdio.h>

int main(void) {
int codigo, qtd;
float preco;

printf("\nCARDÁPIO:\t");  
printf("\n100 - Cachorro quente - 10.10 R$\t");
printf("\n101 - Bauru simples   - 8.30 R$\t");
printf("\n102 - Bauru com ovo   - 8.50 R$"); 
printf("\n103 - Hamburguer      - 12.50 R$\t");
printf("\n104 - Cheeseburguer   - 13.25 R$\t");

  

printf("\nDigite o ítem desejado:\t");
scanf("%d", &codigo);
  
  switch(codigo){
    case 100:
      printf("\nQual a quantidade?\t");
      scanf("%d", &qtd);
      preco = qtd*10.10;
      printf("\nO valor da refeição será de %.2f R$", preco);
      break;
    case 101:
      printf("\nQual a quantidade?\t");
      scanf("%d", &qtd);
      preco = qtd*8.30;
      printf("\nO valor da refeição será de %.2f R$", preco);
      break;
    case 102:
      printf("\nQual a quantidade?\t");
      scanf("%d", &qtd);
      preco = qtd*8.50;
      printf("\nO valor da refeição será de %.2f R$", preco);
      break;
    case 103:
      printf("\nQual a quantidade?\t");
      scanf("%d", &qtd);
      preco = qtd*12.50;
      printf("\nO valor da refeição será de %.2f R$", preco);
      break;
    case 104:
      printf("\nQual a quantidade?\t");
      scanf("%d", &qtd);
      preco = qtd*13.25;
      printf("\nO valor da refeição será de %.2f R$", preco);
      break;
    default:
      printf("Código inválido");
      break;
  }

  return 0;
}