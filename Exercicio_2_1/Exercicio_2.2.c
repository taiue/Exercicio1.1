// Escreva uma função que troca os valores entre duas variáveis do tipo float. Faça um programa que leia
// duas variáveis e mostre seus valores na tela. Em seguida, troque os valores (usando a função) e mostre
// novamente os valores
#include <stdio.h>

void troca_valor(float *x, float *y);

int main() {
    float num1 = 2.4, num2 = 3.8;

    printf("Valor 1: ");
    scanf("%f", &num1);
    printf("\nValor 2: ");
    scanf("%f", &num2);


    printf("\nAntes da troca: num1 = %.2f, num2 = %.2f ", num1, num2);

    troca_valor(&num1, &num2);

    printf("\nvalores trocados: \n");
    printf("num 1: %.2f \n", num1);
    printf("num 2: %.2f", num2);

    return 0;
}


void troca_valor(float *x, float *y){
    float temp = *x;
    *x = *y;
    *y = temp;
}
