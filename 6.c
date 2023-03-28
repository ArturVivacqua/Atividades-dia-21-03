//Exercício 6:

#include <stdio.h>

int main(void) {
int numero;
  
  printf("\nDigite um número inteiro\t");
  scanf("%d", &numero);

  if (numero % 5 == 0 && numero % 3 == 0 && numero % 2 == 0){
    printf("\n%d é divisível por 5, 3 e 2\t", numero);
  }else{
    if (numero % 5 == 0 && numero % 3 == 0){
    printf("\n%d é divisível por 5 e 3\t", numero);
  }else{
      if (numero % 5 == 0 && numero % 2 == 0){
    printf("\n%d é divisível por 5 e 2\t", numero);
  }else{
        if (numero % 3 == 0 && numero % 2 == 0){
    printf("\n%d é divisível por 3 e 2\t", numero);
  }else{
          if (numero % 5 == 0 ){
    printf("\n%d é divisível por 5\t", numero);
  }else{
            if (numero % 3 == 0){
    printf("\n%d é divisível por 3\t", numero);
  }else{
              if (numero % 2 == 0){
    printf("\n%d é divisível por 2\t", numero);
  }else{
                printf("\n %d não é divisível por 5 nem 3 nem 2\t", numero);
  }
  }
  }
  }
  }
    
  }
    
  }
  
  return 0;
}