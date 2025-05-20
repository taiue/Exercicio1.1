// Faça uma função que calcula o perímetro e a área de um círculo, dado o raio.
// void calcula_circulo(float raio, float *pPerimetro, float *pArea);
#include <stdio.h>
#define PI 3.141592653589793

void calcula_circulo(float raio, float *pPerimetro, float *pArea);

int main() {
    float raio, perimetro, area;
    scanf("%f", &raio);

    calcula_circulo(raio, &perimetro, &area);

    printf("Perímetro: %.2f\n", perimetro);
    printf("Área: %.2f\n", area);


    return 0;
}

void calcula_circulo(float raio, float *pPerimetro, float *pArea){
    *pPerimetro = 2 * PI * raio;
    *pArea = PI * raio * raio;
}
