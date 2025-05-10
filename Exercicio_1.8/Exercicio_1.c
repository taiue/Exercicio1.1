#include <stdio.h>

void monta_vetor_soma(int n, int v[n]);
int soma(int n1, int n2);
void mostra_vetor(int n,int v[n]);

int main(){
    int n = 0;
    printf("Defina o tamonho do vetor: ");
    scanf("%d", &n);
    int v[n];

    monta_vetor_soma(n, v);
    
    mostra_vetor(n, v);

    return 0;
}

void monta_vetor_soma(int n, int v[n]){
    for (int i = 0; i < n; i++)
    {
        int n1, n2;
        printf("Soma da iteracao %d \n", i);
        printf("Primeiro numero: ");
        scanf("%d", &n1);
        printf("Segundo numero: ");
        scanf("%d", &n2);
        v[i] = soma(n1, n2);
    }
    printf("\n");
}

int soma(int n1, int n2){
    return n1 + n2;
}

void mostra_vetor(int n,int v[n]){
    printf("Vetor: \n");
    for (int i = 0; i < n; i++)
    {
        if (i == (n-1))
        {
            printf("%d", v[i]);
        }else{
            printf("%d, ", v[i]);
        }
    }
}
