#include <stdio.h>
#include <stdbool.h> // Inclua este cabeçalho para usar bool, true e false

bool comparaVetores(int v1[], int v2[], int n);

int main(){
    int n;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);
    int v1[n];
    int v2[n];

    for (int i = 0; i < n; i++) {
        v1[i] = i;
        v2[i] = i; 
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d, " , v1[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d, " , v2[i]);
    }

    if (comparaVetores(v1, v2, n)) {
        printf("\nOs vetores sao iguais.");
    } else {
        printf("\nOs vetores sao diferentes.");
    }

    return 0;
}

bool comparaVetores(int v1[], int v2[], int n){
    for (int i = 0; i < n; i++){
        if (v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}