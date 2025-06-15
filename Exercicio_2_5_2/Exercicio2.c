// Escreva um programa que realize a multiplicação entre duas matrizes A e B alocadas dinamicamente. A
// matriz resultante também deve ser gerada dinamicamente, de acordo com o algoritmo de multiplicação.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int l1, c1, l2, c2, i, j, k;

    // Leitura das dimensões das matrizes
    printf("Digite as dimensoes da matriz A (linhas colunas): ");
    scanf("%d %d", &l1, &c1);

    printf("Digite as dimensoes da matriz B (linhas colunas): ");
    scanf("%d %d", &l2, &c2);

    // Verifica se é possível multiplicar
    if (c1 != l2) {
        printf("Nao e possivel multiplicar as matrizes!\n");
        return 1;
    }

    // Alocação dinâmica das matrizes
    //Primeiro definimos quantidades de linhas
    int **A = malloc(l1 * sizeof(int*));
    int **B = malloc(l2 * sizeof(int*));
    int **C = malloc(l1 * sizeof(int*));
    //Depois definimos quantidades de colunas
    for (i = 0; i < l1; i++) A[i] = malloc(c1 * sizeof(int));
    for (i = 0; i < l2; i++) B[i] = malloc(c2 * sizeof(int));
    for (i = 0; i < l1; i++) C[i] = malloc(c2 * sizeof(int));

    // Leitura dos elementos da matriz A
    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < l1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    // Leitura dos elementos da matriz B
    printf("Digite os elementos da matriz B:\n");
    for (i = 0; i < l2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    // Multiplicação das matrizes
    for (i = 0; i < l1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Impressão da matriz resultante
    printf("Matriz resultante C:\n");
    for (i = 0; i < l1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Liberação da memória
    for (i = 0; i < l1; i++) free(A[i]);
    for (i = 0; i < l2; i++) free(B[i]);
    for (i = 0; i < l1; i++) free(C[i]);
    free(A);
    free(B);
    free(C);

    return 0;
}