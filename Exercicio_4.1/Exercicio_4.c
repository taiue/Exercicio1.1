#include <stdio.h>

int soma_impares(int x, int y) {
    int soma = 0;
    
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    
    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) { 
            soma += i;
        }
    }
    
    return soma;
}

int main() {
    int x, y;
    
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    
    printf("Soma dos impares entre %d e %d: %d\n", x, y, soma_impares(x, y));
    
    return 0;
}
