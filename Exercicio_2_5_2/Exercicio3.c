#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, j, k, valor, qtd_div;
    int **p; // Ponteiro para ponteiro para armazenar os divisores
    int *tam; // Vetor para armazenar a quantidade de divisores de cada número

    printf("Digite a quantidade de valores: ");
    scanf("%d", &N);

    p = malloc(N * sizeof(int*));
    tam = malloc(N * sizeof(int));

    int *valores = malloc(N * sizeof(int));
    printf("Digite os %d valores:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &valores[i]);
    }

    // Para cada valor, calcula e armazena seus divisores
    for (i = 0; i < N; i++) {
        valor = valores[i];
        qtd_div = 0;

        // Conta quantos divisores tem
        for (j = 1; j <= valor; j++) {
            if (valor % j == 0) qtd_div++;
        }

        tam[i] = qtd_div;
        p[i] = malloc(qtd_div * sizeof(int));

        // Armazena os divisores
        k = 0;
        for (j = 1; j <= valor; j++) {
            if (valor % j == 0) {
                p[i][k] = j;
                k++;
            }
        }
    }

    // Mostra os valores e seus divisores
    for (i = 0; i < N; i++) {
        printf("Valor: %d - Divisores:", valores[i]);
        for (j = 0; j < tam[i]; j++) {
            printf(" %d", p[i][j]);
        }
        printf("\n");
    }

    // Libera memória
    for (i = 0; i < N; i++) {
        free(p[i]);
    }
    free(p);
    free(tam);
    free(valores);

    return 0;
}