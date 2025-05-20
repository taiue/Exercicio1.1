#include <stdio.h>
float euler_iterativa(int n);
float fat(int x);
float euler_recursiva(int n);


int main() {
    int n;

    scanf("%d", &n);
    if (n == 0) {
        printf("1.00");
    } else if(n == 1){
        printf("2.00");
    } else {
        float eulerIterativo = euler_iterativa(n);
        printf("Iterativo: %.2f \n", eulerIterativo);
    }
    printf("------------------------------ \n");
    
    float eulerrec = euler_recursiva(n);
    printf("RECURSIVO: %.2f \n", eulerrec);
    return 0;
}

float euler_iterativa(int n){
    float e = 2;
    for (int i = 2; i <= n; i++) e += 1/fat(i);

    printf("Euler: %.2f \n", e);
    return e;
}

float fat(int x) {
    float resultado = 0;
    for (int i = x-1; i > 0; i--) resultado += x * i;
    
    printf("Fat: %.2f \n", resultado);
    return resultado;
}


float euler_recursiva(int n){
    if (n == 0) {
        return 1.00;
    } else if (n == 1) {
        return 2.00;
    } else {
        return (1.0 / fat(n)) + euler_recursiva(n - 1);
    }
}