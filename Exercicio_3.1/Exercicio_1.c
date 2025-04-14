#include <stdio.h>
int primo(int);


int main(){
    int k, n;

    printf("Digite um valor para N:");
    scanf("%d", &n);
    printf("Digite um valor para K:");
    scanf("%d", &k);

    int contador = 0;

    for(int i = k+1; contador<n; i++){
        if(primo(i)){
            printf("%d \n", i);
            contador++;
        }
    }

    return 0;
}

int primo(int num){
    for(int i = 2; i <= num/2; i++){
        if (num % i == 0) return 0;
    }
    return 1;
}