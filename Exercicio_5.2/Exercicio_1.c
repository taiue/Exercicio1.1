#include <stdio.h>
float constante_e(int);
int fat(int);

int main(){
    int n;

    scanf("%d", &n);

    printf("%.2f", constante_e(n));
    return 0;
}

float constante_e(int n){ 
    if(n == 0) 
        return 0;

    return (1.0/fat(n)) + constante_e(n-1);
} 

int fat(int n){
    if (n ==0){
        return 1;
    }

    return n * fat(n-1);
}
