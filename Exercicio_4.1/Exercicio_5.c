#include <stdio.h>

int eh_primo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int k, n, count = 0;
    
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    int num = k + 1;
    while (count < n) {
        if (eh_primo(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    
    printf("\n");
    return 0;
}