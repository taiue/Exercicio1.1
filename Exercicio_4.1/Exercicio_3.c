#include <stdio.h>
#include <ctype.h>

int ehDigito(char c) {
    return isdigit(c); 
}

int main() {
    char caractere;
    int numero;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    if (ehDigito(caractere)) {
        numero = caractere - '0'; 
        printf("Eh um numero inteiro: %d\n", numero);
    } else {
        printf("O caractere digitado nao eh um digito de 0 a 9.\n");
    }
    
    return 0;
}