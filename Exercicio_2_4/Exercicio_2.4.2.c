//  Considere um vetor v contendo n valores inteiros. Considere também uma chave de busca k (um
// valor inteiro) que se deseja procurar dentro do vetor v. Considere ainda que é possível encontrar
// de 0 a n ocorrências da chave k no vetor v.
// Crie uma função que retorna um vetor (alocado dinamicamente) com os índices em que a chave
// se encontra (que sempre deve terminar com -1). A função deve realocar memória sempre que
// encontrar um novo valor no vetor para armazenar o novo índice do valor encontrado.
// Sugere-se que o protótipo da função seja como a seguir:
// int *busca_seq( int v[], int n, int k ); 

#include <stdio.h>
#include <stdlib.h>

int *busca_seq(int v[], int n, int k);

int main() {
    int v[] = {3, 6, 7, -1, 3, 12, 9, 8, 3, 17};
    int n = 10;
    int k = 3;

    int *indices = busca_seq(v, n, k);

    printf("Índices encontrados: ");
    for (int i = 0; indices[i] != -1; i++) {
        printf("%d ", indices[i]);
    }
    printf("\n");

    free(indices);
    return 0;
}

int *busca_seq(int v[], int n, int k) {
    int *indices = NULL;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] == k) {
            indices = (int *)realloc(indices, (count + 1) * sizeof(int));
            indices[count] = i;
            count++;
        }
    }
    // Adiciona o -1 ao final
    indices = (int *)realloc(indices, (count + 1) * sizeof(int));
    indices[count] = -1;

    return indices;
}