//  Escreva um programa que armazene o nome dos doze meses do ano em um vetor de ponteiros
// para o tipo char. Após isto, pergunte ao usuário qual o número do mês que ele nasceu e mostre
// o nome do mês por extenso usando as strings armazenadas no vetor de ponteiros.
#include <stdio.h>
#include <stdlib.h>


int main(){
    char *v[12] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto","Setembro", "Outubro", "Novembro", "Dezembro"};

    int mes = 0;

    printf("Digite qual seu mes de nascimento? \n");
    scanf("%d", &mes);

    if (mes >= 1 && mes <= 12) {
        printf("Voce nasceu em %s.\n", v[mes - 1]);
    } else {
        printf("Mês inválido!\n");
    }


    return 0;
}