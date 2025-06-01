#include <stdio.h>

int main() {
    int x[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int *px, *p;
    int aux;

    px = x;


    aux = x[2];
    printf("Exemplo - x[2] = %d\n", aux);
    aux = *(x + 2);
    printf("Exemplo - *(x + 2) = %d\n", aux);
    aux = px[2];
    printf("Exemplo - px[2] = %d\n", aux);
    aux = *(px + 2);
    printf("Exemplo - *(px + 2) = %d\n", aux);

    printf("\n");

    
    aux = x[0];
    printf("x[0] = %d\n", aux);
    aux = *(x + 0);
    printf("*(x + 0) = %d\n", aux);
    aux = px[0];
    printf("px[0] = %d\n", aux);
    aux = *(px + 0);
    printf("*(px + 0) = %d\n", aux);

    printf("\n");

    // aux = px[6]
    aux = x[6];
    printf("x[6] = %d\n", aux);
    aux = *(x + 6);
    printf("*(x + 6) = %d\n", aux);
    aux = px[6];
    printf("px[6] = %d\n", aux);
    aux = *(px + 6);
    printf("*(px + 6) = %d\n", aux);

    printf("\n");

    // p = x + 3
    p = &x[3];
    printf("p = &x[3] -> *p = %d\n", *p);
    p = x + 3;
    printf("p = x + 3 -> *p = %d\n", *p);
    p = &px[3];
    printf("p = &px[3] -> *p = %d\n", *p);
    p = px + 3;
    printf("p = px + 3 -> *p = %d\n", *p);

    printf("\n");

    // aux = *(px + 4)
    aux = x[4];
    printf("x[4] = %d\n", aux);
    aux = *(x + 4);
    printf("*(x + 4) = %d\n", aux);
    aux = px[4];
    printf("px[4] = %d\n", aux);
    aux = *(px + 4);
    printf("*(px + 4) = %d\n", aux);

    printf("\n");

    // p = px + 7
    p = &x[7];
    printf("p = &x[7] -> *p = %d\n", *p);
    p = x + 7;
    printf("p = x + 7 -> *p = %d\n", *p);
    p = &px[7];
    printf("p = &px[7] -> *p = %d\n", *p);
    p = px + 7;
    printf("p = px + 7 -> *p = %d\n", *p);

    return 0;
}
