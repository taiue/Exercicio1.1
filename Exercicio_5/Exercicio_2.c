#include <stdio.h>
int soma_iteracao(int, int);
int soma_recursiva(int);

int main(){
    int n, s = 0;

    printf("Valor para n: ");
    scanf("%d", &n);
    
    printf("Soma iteracao: %d \n",soma_iteracao(n, s));
    
    s=0;

    printf("Soma recursiva: %d", soma_recursiva(n));

    return 0;
}

int soma_iteracao(int n, int s){
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }

    return s;
}

int soma_recursiva(int n){
    if(n == 0) return 0;
    return n + soma_recursiva(n-1);
}
