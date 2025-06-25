#include <stdio.h>
#include <stdlib.h>

void mostra_vetores(int n_listas, int *p_qtdValores, int **p_listas) {
    for (int i = 0; i < n_listas; i++) {
        for (int j = 0; j < p_qtdValores[i]; j++) {
            printf("%d ", p_listas[i][j]);
        }
        printf("\n"); // nova linha após cada lista
    }
}

int main() {
    int n_listas = 5;

    // Quantidade de elementos em cada lista
    int qtdValores[] = {6, 4, 2, 6, 3};

    // Aloca vetor de ponteiros
    int **listas = malloc(n_listas * sizeof(int*));

    // Aloca e preenche cada lista manualmente
    listas[0] = (int[]) {7, 0, 2, 3, 6, 1};
    listas[1] = (int[]) {8, 1, 3, 9};
    listas[2] = (int[]) {2, 7};
    listas[3] = (int[]) {3, 4, 0, 8, 4, 0};
    listas[4] = (int[]) {0, 1, 4};

    // Chama a função que imprime os vetores
    mostra_vetores(n_listas, qtdValores, listas);

    // Não precisa dar free porque usamos arrays literais (estáticos)
    // Se usasse malloc para cada lista, aí sim precisaria free()

    return 0;
}
