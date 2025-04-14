#include <stdio.h>

double nilakantha_iterativa(int n) {
    double soma = 3.0;
    for (int i = 0; i < n; i++) {
        double termo = 4.0 / ((2 * i + 2) * (2 * i + 3) * (2 * i + 4));
        soma += (i % 2 == 0) ? termo : -termo;
    }
    return soma;
}

double nilakantha_recursiva(int n, int i) {
    if (i == n) {
        return 3.0;
    }
    double termo = 4.0 / ((2 * i + 2) * (2 * i + 3) * (2 * i + 4));
    return (i % 2 == 0 ? termo : -termo) + nilakantha_recursiva(n, i + 1);
}

int main() {
    int n;
    printf("Digite o número de termos da série de Nilakantha: ");
    scanf("%d", &n);
    
    printf("Aproximação iterativa de pi: %.6f\n", nilakantha_iterativa(n));
    printf("Aproximação recursiva de pi: %.6f\n", nilakantha_recursiva(n, 0));
    
    return 0;
}
