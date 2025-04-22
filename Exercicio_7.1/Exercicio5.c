#include <stdio.h>

void busca_todos_rec(int n, int v[], int chave_busca, int indices[], int posicao, int atual);

int main() {
    int n, chave_busca;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    int indices[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Digite a chave de busca: ");
    scanf("%d", &chave_busca);

    busca_todos_rec(n, v, chave_busca, indices, 0, 0);

    printf("Indices onde a chave foi encontrada:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", indices[i]);
    }
    printf("\n");

    return 0;
}

void busca_todos_rec(int n, int v[], int chave_busca, int indices[], int posicao, int atual) {
    if (atual == n) {
        for (int i = posicao; i < n; i++) {
            indices[i] = -1;
        }
        return;
    }

    if (v[atual] == chave_busca) {
        indices[posicao] = atual; 
        busca_todos_rec(n, v, chave_busca, indices, posicao + 1, atual + 1);
    } else {
        busca_todos_rec(n, v, chave_busca, indices, posicao, atual + 1);
    }
}