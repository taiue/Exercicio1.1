#include <stdio.h>

void busca_todos(int n, int v[], int chave_busca, int indices[]);

int main(){
    int n, chave_busca;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];
    int indices[n];

    for (int i = 0; i < n; i++)    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Digite a chave de busca: ");
    scanf("%d", &chave_busca);

    
    busca_todos(n, v, chave_busca, indices);

    printf("Indices onde a chave foi encontrada:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", indices[i]);
    }
    printf("\n");

    return 0;
}

void busca_todos(int n, int v[], int chave_busca, int indices[]){
    int posicao = 0;

    for (int i = 0; i < n; i++)
    {
        if(v[i] == chave_busca){
            indices[posicao] = i;
            posicao++;
        }
    }

    for (int i = posicao; i < n; i++) {
        indices[i] = -1;
    }
    
}