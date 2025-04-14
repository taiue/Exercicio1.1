#include <stdio.h>

int main() {
int x, y, n;

printf("Casos de teste:");
scanf("%d", &n);

for (int i = 0; i < n; i++)
{    
    int soma = 0, impar = 0;
    printf("Digite um numero:");
    scanf("%d", &x);
    printf("Digite o segundo numero:");
    scanf("%d", &y);
    
    if(x < y){
        for (int i = x+1; i < y; i++)
        {
            if(i % 2 != 0){
                soma += i;
                impar ++;
            }
        }

        printf("Soma: %d \nQuantidade de impares: %d\n", soma, impar);
    } else if (x > y) {
        for (int i = y+1; i < x; i++)
        {
            if(i % 2 != 0){
                soma += i;
                impar ++;
            }
        }

        printf("Soma: %d \nQuantidade de impares: %d\n", soma, impar);
    
    } else {
        printf("0 \n");
    }

}
    return 0;
}