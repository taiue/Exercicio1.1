#include <stdio.h>

int maiorValor(int a, int b, int c) {
    int maior = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    return maior;
}

int main() {
    int x, y, z;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("O maior valor eh: %d\n", maiorValor(x, y, z));
    return 0;
}