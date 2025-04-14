#include <stdio.h>

int main() {
int x, y, soma = 0, impar = 0;

scanf("%d", &x);
scanf("%d", &y);

if(x < y){
    for (int i = x; i <= y; i++)
    {
        if(i % 2 != 0){
            soma += i;
            impar ++;
        }
    }
} else if (x > y) {
    for (int i = y; i <= x; i++)
    {
        if(i % 2 != 0){
            printf("%d \n", i);
            soma += i;\
            impar ++;
        }
    }

} else {
    printf("Valor invalido");
}

printf("Soma: %d \nQuantidade de impares: %d,", soma, impar);


    return 0;
}