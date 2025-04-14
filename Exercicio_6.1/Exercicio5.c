#include <stdio.h>

int main() {
    int diasPorMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int diasPassados, mes = 0, dia;

  
    do {
        printf("Digite o numero de dias passados desde o inicio de 2022 (1 a 365): ");
        scanf("%d", &diasPassados);
    } while (diasPassados <= 0 || diasPassados > 365);

    
    while (diasPassados > diasPorMes[mes]) {
        diasPassados -= diasPorMes[mes];
        mes++;
    }

    dia = diasPassados;

    printf("Data correspondente: %02d/%02d/2022\n", dia, mes + 1);

    return 0;
}
