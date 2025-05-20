#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool eh_palindromo(char str[]);


int main() {
    char str[20];
    printf("Digite uma string: ");
    scanf("%19s", str); // Lê até 19 caracteres e adiciona o caractere nulo automaticamente

    
    if (eh_palindromo(str))
    {
        printf("eh palindromo");
    } else {
        printf("nao eh palindromo");
    }
    

    return 0;
}

bool eh_palindromo(char str[]) {
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho / 2; i++) {
        if (str[i] != str[tamanho - i - 1]) {
            return false;
        }
    }
    return true; 
}