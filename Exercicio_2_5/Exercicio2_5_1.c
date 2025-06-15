// Crie um programa que crie um vetor de ponteiros do tipo float com 5 elementos que irão
// armazenar as notas de 5 estudantes. Em seguida, pergunte ao usuário qual o número de notas.
// Após isto, aloque dinamicamente os 5 ponteiros do vetor criado de modo que possam armazenar
// a quantidade de notas indicada (que será igual para todos os estudantes). Por fim, peça para o
// usuário digitar todas as notas de todos os estudantes e mostre-as na tela.


#include <stdio.h>
#include <stdlib.h>


int main(){
    float *v[5];
    int nNotas = 0;

    printf("Quantas notas: ");
    scanf("%d", &nNotas);

    for(int i = 0; i < 5; i++){
        v[i] = malloc(sizeof(float) * nNotas);
    }

    for(int i = 0 ; i < 5; i++ ){
        printf("Notas aluno %d: \n", i + 1);
        for(int j = 0 ; j < nNotas ; j++ ){
            scanf("%f", &v[i][j]);
        }
    }

    for(int i = 0 ; i < 5 ; i++ ){
        printf("Notas aluno %d: ", i+1);
        for(int j = 0 ; j < nNotas; j++ ){
            printf("%.2f ", v[i][j]);
        }
        printf("\n");
    }

        for (int i = 0; i < 5; i++) {
        free(v[i]);
    }

    return 0;
}
