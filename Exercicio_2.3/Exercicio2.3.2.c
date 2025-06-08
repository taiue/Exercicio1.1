#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *repetidor(char *s, int n);

int main() {
    char s[50];
    int n;

    printf("Digite a string: ");
    scanf("%49s", s);

    printf("Digite o numero de repeticoes: ");
    scanf("%d", &n);

    char *resultado = repetidor(s, n);

    printf("Resultado: %s\n", resultado);

    free(resultado);
    return 0;
}

char *repetidor(char *s, int n) {
    int tam = strlen(s);
    char *nova = (char *)malloc((tam * n + 1) * sizeof(char)); 
    //tam * n: calcula o total de caracteres necessários para repetir a string s n vezes, 
    // + 1: adiciona espaço para o caractere nulo \0 que indica o final da string em C.
    if (nova == NULL) return NULL;

    nova[0] = '\0'; // Inicializa a string vazia

    for (int i = 0; i < n; i++) {
        strcat(nova, s);
    }
    return nova;
}