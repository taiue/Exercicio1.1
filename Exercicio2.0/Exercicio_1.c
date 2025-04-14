#include <stdio.h>

int main() {
int n, valor, impar = 0, par = 0, positivo = 0, negativo = 0;


scanf("%d", &n);

for (int i = 0; i < n; i++)
{
    scanf("%d", &valor);

    if(valor > 0){
        positivo += 1;        
    }
    
    if(valor < 0){
        negativo += 1;        
    }

    if (valor % 2 == 0)
    {
        par +=1;
    }

    if (valor % 2 != 0)
    {
        impar +=1;
    }
}

printf("%d valores pares \n%d valores impares \n%d valores positivos \n%d valores negativos", par, impar, positivo, negativo);

return 0;
}
