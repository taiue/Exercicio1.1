#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *vogaiss(char *s) {
    int i, j = 0, cont = 0;

    // 1ª passada: conta as vogais usando strchr
    for (i = 0; s[i]; i++) {
        if (strchr("aeiou", s[i])) {
            cont++;
        }
    }

    char *nova = malloc((cont + 1) * sizeof(char));
    if (!nova) return NULL;

    // 2ª passada: copia as vogais
    for (i = 0; s[i]; i++) {
        if (strchr("aeiou", s[i])) {
            nova[j++] = s[i];
        }
    }

    nova[j] = '\0';
    return nova;
}

int main() {
    char s[] = "otorrinolaringologista";
    char *resultado = vogaiss(s);

    if (resultado) {
        printf("Vogais: %s\n", resultado);
        free(resultado);
    }

    return 0;
}