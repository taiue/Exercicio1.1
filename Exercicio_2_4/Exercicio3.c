// ) Escreva uma função que realiza a união entre dois conjuntos de inteiros contidos nos vetores v1
// e v2. A função recebe os vetores e suas respectivas capacidades (n1 e n2) como parâmetros de
// entrada e retorna o endereço do vetor alocado (contendo a união entre v1 e v2). Além disso, há
// um parâmetro passado por referência (ponteiro p3), que serve para “retornar” a capacidade do
// vetor gerado. Faça o programa principal invocando a função (a estrutura do programa é
// semelhante ao exemplo dado em aula – intersecção). Protótipo da função:
// int *uniao( int *v1, int n1, int *v2, int n2, int *p3 );


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Protótipo da função união
int *uniao(int *v1, int n1, int *v2, int n2, int *p3);

// Função auxiliar para verificar se um valor já está no vetor
bool existe(int *v, int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (v[i] == valor) return true;
    }
    return false;
}

int main() {
    int v1[] = {1, 2, 3, 4, 5};
    int v2[] = {3, 4, 5, 6, 7};
    int n1 = 5, n2 = 5;
    int n3;

    int *v3 = uniao(v1, n1, v2, n2, &n3);

    printf("União dos conjuntos:\n");
    for (int i = 0; i < n3; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    free(v3);
    return 0;
}

int *uniao(int *v1, int n1, int *v2, int n2, int *p3) {
    int *v3 = NULL;
    int n3 = 0;

    // Adiciona todos os elementos de v1
    for (int i = 0; i < n1; i++) {
        v3 = (int *)realloc(v3, (n3 + 1) * sizeof(int));
        v3[n3++] = v1[i];
    }

    // Adiciona elementos de v2 que não estão em v1
    for (int i = 0; i < n2; i++) {
        if (!existe(v3, n3, v2[i])) {
            v3 = (int *)realloc(v3, (n3 + 1) * sizeof(int));
            v3[n3++] = v2[i];
        }
    }

    *p3 = n3;
    return v3;
}