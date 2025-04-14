#include <stdio.h>

int main() {
    int x, y, r;

    scanf("%d", &x);
    scanf("%d", &y);
    
    if(x == y) {
        printf("O JOGO DUROU 24 HORAS");
    }
    if(x < y){
        r = y - x;
        printf("O JOGO DUROU %d HORAS", r);
    }else if(x > y){
        r = (24 - x) + y;
        printf("O JOGO DUROU %d HORAS", r);
    }

    return 0;
}