#include <stdio.h>
float func_iterativa(int);
float func_recursiva(int);

int main(){
    int n;
    printf("Digite valor de n:");
    scanf("%d", &n);

    printf("%.2f \n", func_iterativa(n));

    printf("%.2f", func_recursiva(n));

    return 0;
}

float func_iterativa(int n) {
    float s = 0.0;

    for (int i = 1; i <= n; i++)
    {
        s += 1.0/i;
    }

    return s;
}

float func_recursiva(int n) {
    if (n == 1) 
        return 1;

    return (1.0/n) + func_recursiva(n-1);
}

