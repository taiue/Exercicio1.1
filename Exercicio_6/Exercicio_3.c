#include <stdio.h>

double serie_harmonica_iterativa(int k) {
    double soma = 0.0;
    for (int i = 1; i <= k; i++) {
        soma += 1.0 / i;
    }
    return soma;
}

double serie_harmonica_recursiva(int k) {
    if (k == 1) {
        return 1.0;
    }
    return (1.0 / k) + serie_harmonica_recursiva(k - 1);
}

int main() {
    int k;
    printf("Digite o número de termos da série harmônica: ");
    scanf("%d", &k);
    
    printf("Soma iterativa: %.6f\n", serie_harmonica_iterativa(k));
    printf("Soma recursiva: %.6f\n", serie_harmonica_recursiva(k));
    
    return 0;
}