#include <stdio.h>
#include <string.h>

/// FUI FAZER A QUESTAO 1 E ACABEI FAZENDO A 2 DIRETO 

int main(){
    char c;
    char str[20];
    int contador = 0;

    printf("Digite uma string: ");
    scanf("%19s", str);
    
    printf("Digite o caractere que deseja buscar \n");
    scanf(" %c", &c);

    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++) {
        if (c == str[i]) {
            contador++;
        }
    }

    if (contador > 0) {
        printf("A letra '%c' aparece %d vezes em \"%s\".\n", c, contador, str);
    } else {
        printf("A letra '%c' nao aparece em \"%s\".\n", c, str);
    }
    return 0;
}