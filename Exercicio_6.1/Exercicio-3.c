#include <stdio.h>

int main()
{
    int a[20];
    int soma = 0;
    
    for(int i = 0; i < 20; i++) {
        a[i] = i + 1;
    }
    
    for(int i = 1; i < 21; i++){
        soma = (a[i] - (a[21] - 1))*2;
    }
    printf("%d", soma);
    
    return 0;
}