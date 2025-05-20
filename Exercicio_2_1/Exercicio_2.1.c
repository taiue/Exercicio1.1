// Faça uma função que recebe dois números, a e b. A função deve incrementar a e decrementar b.


#include <stdio.h>

void inc_dec(int *a, int *b);

int main() {
    int num1 = 10, num2 = 20;
    int *a = &num1;
    int *b = &num2;

    inc_dec(a, b);

    printf("%d \n", *a);
    printf("%d", *b);
    return 0;
}

void inc_dec(int *a, int *b){
    (*a)++;
    (*b)--;
}
