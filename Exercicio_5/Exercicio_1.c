// Escreva uma função que calcula o somatório dos n termos que são múltiplos de k a partir de x. Os
// parâmetros são determinados pelo usuário e a função é chamada pelo programa principal, que
// em seguida mostra o resultado na tela. Exemplo: para n = 3, k = 4 e x = 18, temos, 20 + 24 + 28 =
// 72. Protótipo da função:
// int soma_especial(int n, int k, int x);

#include <stdio.h>
int soma_especial(int, int, int);

int main() {
    int n, k, x;

    printf("Valor de iteracoes:");
    scanf("%d", &n);
    printf("Multiplos de: ");
    scanf("%d", &k);
    printf("A partir de: ");
    scanf("%d", &x);
    
    printf("%d", soma_especial(n, k, x));
    
    return 0;
}


int soma_especial(int n, int k, int x){
    if(n == 0) return 0;

    if (x % k == 0) return x + soma_especial(n-1, k, x+1);

    return soma_especial(n, k, x+1);
}