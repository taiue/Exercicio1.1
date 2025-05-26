#include <stdio.h>
void max_min(int vet[], int tam, int *pMin, int *pMax)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (vet[i] < *pMin)
        {
            *pMin = vet[i];
        }
        else if (vet[i] > *pMax)
        {
            *pMax = vet[i];
        }
    }
}

int main()
{

    int i, tam, pMin = 2147483647, pMax = -2147483647;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int vet[tam];
    for (i = 0; i < tam; i++)
    {
        printf("Digite um valor para o indice %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    max_min(vet, tam, &pMin, &pMax);

    printf("Menor valor: %d\n", pMin);
    printf("Maior valor: %d\n", pMax);
    return 0;
}
