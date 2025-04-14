#include <stdio.h>
#include <math.h>

double serie_taylor(double x, int n){
    double soma = 1.0;
    double termo = 1.0;

    for (int i = 1; i<n; i++){
        termo*= x/i;
        soma+=termo;
    }
    return soma;
}


int main(){
    double x = 1.0;
    double valor = exp(x);
    double erro;
    int precisao[] = {2, 3, 4, 5, 6, 7, 8};
    int num_p = sizeof(precisao)/sizeof(precisao[0]);

        
    printf("Precisao             | Termos        \n");
    printf("--------------------------------------------------\n");

    for (int p = 0; p < num_p; p++) {
        double tolerancia = pow(10, -precisao[p]);
        int n;
        
        for (n = 1; ; n++) {
            double aproximacao = serie_taylor(x, n);
            erro = fabs(aproximacao - valor);
            
            if (erro < tolerancia) {
                printf("%d casas decimais            | %d termos\n", precisao[p], n);
                break;
            }
        }
    }
    return 0;
}