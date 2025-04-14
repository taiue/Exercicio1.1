#include <stdio.h>
#include <math.h>

double serie_alternada_iterativa(int n) {
    double soma = 0.0;
    for (int i = 1; i <= n; i++) {
        soma += pow(-1, i + 1) / i;
    }
    return soma;
}

double serie_alternada_recursiva(int n) {
    if (n == 1) {
        return 1.0;
    }
    return pow(-1, n + 1) / n + serie_alternada_recursiva(n - 1);
}

int main() {
    int n;
    printf("Digite o número de termos da série alternada: ");
    scanf("%d", &n);
    
    printf("Soma iterativa: %.6f\n", serie_alternada_iterativa(n));
    printf("Soma recursiva: %.6f\n", serie_alternada_recursiva(n));
    
    return 0;
}
