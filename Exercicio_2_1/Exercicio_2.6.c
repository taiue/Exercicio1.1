#include <stdio.h>
void max_vetor(float vet[], int tam, float *pMax, int *pIndice)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (vet[i] > *pMax)
        {
            *pMax = vet[i];
            *pIndice = i;
        }
    }
}
int main()
{
    int i, tam, pMax = -2147483647, pIndice;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    float vet[tam];
    for (i = 0; i < tam; i++)
    {
        printf("Digite um valor para o indice %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    max_vetor(vet, tam, &pMax, &pIndice);

    printf("O indice do maior numero e %d, e o maior numeor e %d", pIndice+1, pMax);

    return 0;
}