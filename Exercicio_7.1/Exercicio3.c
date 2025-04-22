#include <stdio.h>
#include <stdbool.h> 

int soma_primos(int n, int v[]);

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    int soma = soma_primos(n, v);
    printf("A soma dos numeros primos no vetor e: %d\n", soma);

    return 0;
}

bool eh_primo(int num) {
    if (num < 2) return false; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}


int soma_primos(int n, int v[]) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        if (eh_primo(v[i])) { 
            soma += v[i];
        }
    }
    return soma;
}


