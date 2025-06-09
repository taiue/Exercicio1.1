// Faça um programa que leia uma certa quantidade de inteiros que são armazenados num vetor v.
// A quantidade NÃO será indicada previamente pelo usuário e o programa deve alocar/realocar
// espaço para v, sempre que necessário. À medida que os valores são digitados e armazenador no
// vetor v, o programa também deve armazenar os valores positivos em um vetor vp e o valores
// negativos no vetor vn. Da mesma forma como ocorre com o vetor v, os dois outros vetores (vp e
// vn) devem ser alocados dinamicamente. Os vetores vp e vn não devem conter zeros. A cada
// digitação de um novo valor, o programa deve perguntar se o usuário deseja digitar outro número.
// A digitação encerra quando a resposta do usuário é negativa. Ao final, imprima os três vetores.


#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = NULL, *vp = NULL, *vn = NULL;
    int n = 0, np = 0, nn = 0;
    int valor;
    char resp;

    do {
        printf("Digite um inteiro: ");
        scanf("%d", &valor);

        // Realoca vetor principal
        v = (int *)realloc(v, (n + 1) * sizeof(int));
        v[n] = valor;
        n++;

        // Se positivo (e diferente de zero), realoca e armazena em vp
        if (valor > 0) {
            vp = (int *)realloc(vp, (np + 1) * sizeof(int));
            vp[np] = valor;
            np++;
        }
        // Se negativo, realoca e armazena em vn
        else if (valor < 0) {
            vn = (int *)realloc(vn, (nn + 1) * sizeof(int));
            vn[nn] = valor;
            nn++;
        }

        printf("Deseja digitar outro numero? (s/n): ");
        scanf(" %c", &resp);

    } while (resp == 's' || resp == 'S');

    // Imprime os vetores
    printf("\nVetor v: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\nVetor vp (positivos): ");
    for (int i = 0; i < np; i++) {
        printf("%d ", vp[i]);
    }
    printf("\nVetor vn (negativos): ");
    for (int i = 0; i < nn; i++) {
        printf("%d ", vn[i]);
    }
    printf("\n");

    // Libera memória
    free(v);
    free(vp);
    free(vn);

    return 0;
}