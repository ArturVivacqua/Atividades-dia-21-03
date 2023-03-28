//Exercício 1:

#include <stdio.h>

int main(void) {
double numero, sqroot, potencia;
  
  printf("\nDigite um número inteiro: \t");
  scanf("%lf", &numero);

  if (numero>0){
    sqroot = sqrt(numero);
    potencia = (numero*numero);
    printf("\nO quadrado do número digitado é %.2lf e a raiz quadrada é %.2lf\t", potencia, sqroot);
  }
  return 0;
}