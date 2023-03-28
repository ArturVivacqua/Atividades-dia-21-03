//Exercício 4:

#include <stdio.h>

int main(void) {
int opcao;
float num1, num2, total;

printf("\nCALCULADORA:\t");  
  
  printf("\nDigite o primeiro número\t");
  scanf("%f", &num1);

  printf("\nDigite o segundo número\t");
  scanf("%f", &num2);
  
  
printf("\nOpção 1 - soma\t");
printf("\nOpção 2 - subtração\t");
printf("\nOpção 3 - multiplicação\t");
printf("\nOpção 4 - divisão\t");

printf("\nDigite a operação desejada:\t");
scanf("%d", &opcao);
  
  switch(opcao){
    case 1:
      total = (num1 + num2);
      printf("\nO resultado é: %.2f\t", total);
      break;
    case 2:
      total = (num1 - num2);
      printf("\nO resultado é: %.2f\t", total);
      break;
    case 3:
      total = (num1 * num2);
      printf("\nO resultado é: %.2f\t", total);
      break;
    case 4:
      total = (num1 / num2);
      printf("\nO resultado é: %.2f\t", total);
      break;

    default:
      printf("Operação inválida");
      break;
  }
  return 0;
}