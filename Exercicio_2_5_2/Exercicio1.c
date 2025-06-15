// Faça um programa que aloque uma matriz quadrada dinamicamente, usando um ponteiro para ponteiro
// (int**). O tamanho (ordem) da matriz deve ser informado pelo usuário. Após a entrada de dados, o
// programa deve armazenar os valores da diagonal secundária em um vetor V (também alocado
// dinamicamente), que por fim deve ser mostrado na tela. A geração do vetor V deve ser feita através da
// função a seguir:
// int *diagonal_secundaria( int **matriz, int ordem );
#include <stdio.h>
#include <stdlib.h>

int *diagonal_secundaria( int **matriz, int ordem ){
    int *v = malloc(sizeof(int) * ordem);
    
    for (int i = 0, j = ordem - 1; i < ordem; i++, j--) {
        v[i] = matriz[i][j];
    }

    return v;
    
}

int main(){
    int **p; // Ponteiro de ponteiro (será a matriz)
    int ordem, i, j;

    printf("Digite a ordem:\n");
    scanf("%d", &ordem);

        // Alocação da matriz
    p = malloc( sizeof(int*) * ordem );
    for( i = 0 ; i < ordem ; i++ ){
        p[i] = malloc( sizeof(int) * ordem );
    }

        // Leitura dos elementos da matriz
    for( i = 0 ; i < ordem ; i++ ){
        for( j = 0 ; j < ordem ; j++ ){
            scanf("%d", &p[i][j]);
        }
    }

        // Impressão da matriz
    for( i = 0 ; i < ordem ; i++ ){
        for( j = 0 ; j < ordem ; j++ ){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    int *v = diagonal_secundaria(p, ordem);
    printf("Diagonal secundaria: ");
    for (i = 0; i < ordem; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

        // Liberação da memória
    for (i = 0; i < ordem; i++) {
        free(p[i]);
    }
    free(p);
    free(v);

    return 0;
}