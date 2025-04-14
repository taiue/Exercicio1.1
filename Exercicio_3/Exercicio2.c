#include <stdio.h>
#include <math.h>

double serie_taylor(double x, int n) {
    double soma = 1.0;  
    double termo = 1.0; 

    for (int i = 1; i < n; i++) {
        termo *= x / i; 
        soma += termo;
    }
    return soma;
}

int main() {
    double x;
    int n;
    
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    printf("Digite o numero de termos n: ");
    scanf("%d", &n);
    
    double resultado = serie_taylor(x, n);
    printf("A aproximacaoo de e^%.2f com %d termos e: %.10f\n", x, n, resultado);
    
    return 0;
}