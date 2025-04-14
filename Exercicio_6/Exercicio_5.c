#include <stdio.h>
#include <math.h>

double gregory_leibniz_iterativa(int n) {
    double soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += pow(-1, i) * (4.0 / (2 * i + 1));
    }
    return soma;
}

double gregory_leibniz_recursiva(int n, int i) {
    if (i == n) {
        return 0.0;
    }
    return pow(-1, i) * (4.0 / (2 * i + 1)) + gregory_leibniz_recursiva(n, i + 1);
}

int main() {
    int n;
    printf("Digite o numero de termos da serie de Gregory-Leibniz: ");
    scanf("%d", &n);
    
    printf("Aproximacao iterativa de pi: %.6f\n", gregory_leibniz_iterativa(n));
    printf("Aproximacao recursiva de pi: %.6f\n", gregory_leibniz_recursiva(n, 0));
    
    return 0;
}