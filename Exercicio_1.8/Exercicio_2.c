#include <stdio.h>
#include <stdlib.h> // Para rand() e srand()
#include <time.h>   // Para time()

void prencha_random(int n, float v[n]);
void mostra_vetor(int n,float v[n]);
void ordena_vetor(char c, int n, float v[n]);

int main(){
    int n;
    char c;
    printf("digite o tamaho do vetor: ");
    scanf("%d", &n);
    float v[n];

    prencha_random(n, v);
    mostra_vetor(n, v);

    printf(" \nDeseja ordenar o vetor em `c` crescente ou `d` decrescente?");
    scanf(" %c", &c);

    ordena_vetor(c, n, v);
}

void prencha_random(int n, float v[n]){
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        v[i] = ((float)rand() / RAND_MAX) * 100.0f + 1.0f; // Gera numeros entre 1.0 e 100.0
    }
}


void mostra_vetor(int n,float v[n]){
    printf("Vetor: \n");
    for (int i = 0; i < n; i++)
    {
        if (i == (n-1))
        {
            printf("%.2f", v[i]);
        }else{
            printf("%.2f, ", v[i]);
        }
    }
}

void ordena_vetor(char c, int n, float v[n]){
    if (c == 'c')
    {
        for (int i = 0; i < n - 1; i++){
            for (int j = 0; j < n - i - 1; j++) // pois o numero de trans ja deve estar ornado
            {
                if(v[j] > v[j + 1]){
                    float temp = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = temp;
                }
            }
        }
        printf("Vetor crescente: \n");
        
    } else if (c == 'd'){
        for (int i = 0; i < n -1; i++)
        {
            for (int j = 0; j < n - i -1; j++) // vai pegar a proixima deixando o codigo mais rapido
            {
                if (v[j] < v[j + 1])
                {
                    float temp = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = temp;
                }
            }
        }
        
    } else {
        printf("Caracter nao aceito!");
        return;
    }

    mostra_vetor(n, v);
}
