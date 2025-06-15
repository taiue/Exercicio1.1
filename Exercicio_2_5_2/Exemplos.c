#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 3, *p1, **p2;

    p1 = &a;
    p2 = &p1;

    // Mostra endereço da variável p1.
    printf("Endereco de P1 = %d\n", p2 );

    // Mostra endereço da variável a.
    printf("Endereco de a = %d\n", *p2 ); // p2[0]

    // Mostra valor da variável a.
    printf("valor de a = %d\n", **p2 ); 

    return 0;
}