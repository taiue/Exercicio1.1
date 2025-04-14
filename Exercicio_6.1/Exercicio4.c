#include <stdio.h>

int main()
{
    int A[5];
    int i, troca;

    // Entrada
    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }

    for (i = 0; i < 5 / 2; i++)
    {
        troca = A[i];
        A[i] = A[4 - i];
        A[4 - i] = troca;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
