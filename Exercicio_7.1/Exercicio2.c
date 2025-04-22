#include <stdio.h>

void vetor_fibonacci(int n, int v[]);

int main(){
    int n;

    scanf("%d", &n);
    int  v[n];
    vetor_fibonacci(n, v);

    printf("Sequencia de Fibonacci:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

}

void vetor_fibonacci(int n, int v[]) {
    if (n >= 1) v[0] = 0;
    if (n >= 2) v[1] = 1;

    for (int i = 2; i < n; i++) {
        v[i] = v[i - 1] + v[i - 2];
    }
}