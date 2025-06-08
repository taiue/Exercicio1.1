#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, count = 0;
    float soma = 0, media;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float *v = (float *)malloc(n * sizeof(float));

    // Entrada de dados
    printf("Digite os valores:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
        soma += v[i];
    }

    media = soma / n;

    // Conta quantos valores são maiores ou iguais à média
    for (int i = 0; i < n; i++) {
        if (v[i] >= media) {
            count++;
        }
    }

    // Aloca novo vetor para os valores >= média
    float *maiores = (float *)malloc(count * sizeof(float));

    // Copia os valores >= média
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] >= media) {
            maiores[j++] = v[i];
        }
    }

    printf("Media: %.2f\n", media);
    printf("Valores maiores ou iguais a media:\n");
    for (int i = 0; i < count; i++) {
        printf("%.2f ", maiores[i]);
    }
    printf("\n");

    free(v);
    free(maiores);
    return 0;
}