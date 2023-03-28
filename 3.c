//Exercício 3:

#include <stdio.h>

int main(void) {
int ddd;
printf("\nDigite o DDD da sua cidade\t");
scanf("%d", &ddd);
  
  switch(ddd){
    case 61:
      printf("Você mora em Brasília");
      break;
    case 71:
      printf("Você mora em Salvador");
      break;
    case 11:
      printf("Você mora em São Paulo");
      break;
    case 21:
      printf("Você mora no Rio de Janeiro");
      break;
    case 32:
      printf("Você mora em Juiz de Fora");
      break;
    case 19:
      printf("Você mora em Campinas");
      break;
    case 27:
      printf("Você mora em Vitória");
      break;
    case 31:
      printf("Você mora em Belo Horizonte");
      break;
    default:
      printf("DDD inválido");
      break;
  }
  return 0;
}