#include <stdio.h>

void cacula_hora(int totalMinutos, int *ph, int *pm)
{
    *ph = totalMinutos / 60;
    *pm = totalMinutos % 60;
}

int main()
{
    int totalMinutos;
    int hora, minuto;

    printf("Digite o total de minutos passados desde meia-noite: ");
    scanf("%d", &totalMinutos);

    cacula_hora(totalMinutos, &hora, &minuto);

    printf("Hora corrente: %02d:%02d\n", hora, minuto);

    return 0;
}
