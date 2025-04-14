#include <stdio.h>
#include <math.h>

long double taylor_exp(double, int);
long double fatorial(int);
long double taylor_exp_recursivo(double, int);

int main() {
    double x;
    int termos;
    
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    printf("Digite a quantidade de termos da série: ");
    scanf("%d", &termos);
    
    long double aproximacao = taylor_exp(x, termos);
    long double aproximacao = taylor_exp_recursivo(x, termos);

    long double valor_real = exp(x);
    
    printf("\nO valor aproximado de e^%.2f usando %d termos é: %.15Lf\n", x, termos, aproximacao);
    printf("Valor real de e^%.2f (usando exp()): %.15Lf\n", x, valor_real);
    printf("Diferença: %.15Lf\n", fabsl(valor_real - aproximacao));
    
    return 0;

}

long double taylor_exp(double x, int termos) {
    long double resultado = 0.0;
    for (int n = 0; n < termos; n++) {
        resultado += pow(x, n) / fatorial(n);
    }
    return resultado;
}

long double fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    } else {
        return n * fatorial(n - 1);
    }
}

long double taylor_exp_recursivo(double x, int termos) {
    if (termos == 0) {
        return 0.0;
    } else {
        return (pow(x, termos - 1) / fatorial(termos - 1)) + taylor_exp_recursivo(x, termos - 1);
    }
}

long double termo_taylor(double x, int n) {
    if (n == 0) {
        return 1.0; 
    } else {
        return (pow(x, n) / fatorial(n)) + termo_taylor(x, n - 1);
    }
}