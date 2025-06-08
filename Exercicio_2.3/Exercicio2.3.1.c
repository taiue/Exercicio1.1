// Escreva uma função que recebe um vetor float v e sua capacidade n, e retorne o endereço de um
// vetor alocado dinamicamente, cujo conteúdo seja o mesmo de v, ou seja, a função retorna um
// clone do vetor v. Faça o programa principal com a entrada de dados (ou um vetor fixo), chame a
// função e mostre o vetor resultante na tela. Protótipo da função

#include <stdio.h>
#include <stdlib.h>

float *clone(float *v, int n);

int main() {
    int n = 5;
    float v[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    // Clona o vetor
    float *v_clonado = clone(v, n);

    printf("Vetor clonado:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", v_clonado[i]);
    }
    printf("\n");

    free(v_clonado); // Libera a memoria alocada
    return 0;
}

float *clone(float *v, int n) {
    float *novo = (float *)malloc(n * sizeof(float)); //aloca um bloco de tamanho n na memoria
    if (novo == NULL) return NULL;

    for (int i = 0; i < n; i++) {
        novo[i] = v[i];
    }
    return novo;
}