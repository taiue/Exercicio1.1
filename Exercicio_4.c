#include <stdio.h>

int main() {
    int x, y, r = 0;
    int *ptr;
    
    int meses[] = {31, 28, 31, 30, 31, 30,31,31,30,31, 30, 31};

    scanf("%d", &x);
    scanf("%d", &y);

    for (ptr = meses; ptr < meses + y; ptr++) {
        r += *ptr ;
        
        printf("%d\n", r); 
    }

    printf("valor total: %d\n", r + x); 

    return 0;
}