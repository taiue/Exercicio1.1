#include <stdio.h>

void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ) {
    *pMin = mat[0][0]; 
    *pI = 0; 
    *pJ = 0; 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (mat[i][j] < *pMin) {
                *pMin = mat[i][j]; 
                *pI = i; 
                *pJ = j; 
            }
        }
    }
}

int main() {
    float mat[3][4];
    float minValue;
    int minRow, minCol;

    
    printf("Digite os elementos da matriz 3x4:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }

    min_matriz(mat, &minValue, &minRow, &minCol);

    printf("Menor valor: %.2f\n", minValue);
    printf("Coordenadas: Linha %d, Coluna %d\n", minRow, minCol);

    return 0;
}
