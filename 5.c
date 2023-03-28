//Exercício 5

#include <stdio.h>

int main() {
float valor;
int notas[6] = {100, 50, 20, 10, 5, 2}; 
float moedas[6] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};

    printf("Digite um valor: ");
    scanf("%f", &valor);

    int inteira = (int) valor; 
    float fracionaria = valor - inteira; 

    
    for(int i=0; i<6; i++) {
        int qtd_notas = inteira / notas[i];
        inteira = inteira % notas[i];
        printf("%d nota(s) de R$%d\n", qtd_notas, notas[i]);
    }

    
    printf("MOEDAS:\n");

    for(int i=0; i<6; i++) {
        int qtd_moedas = fracionaria / moedas[i];
        fracionaria = fmodf(fracionaria, moedas[i]);
        printf("%d moeda(s) de R$%.2f\n", qtd_moedas, moedas[i]);
    }

    return 0;
}