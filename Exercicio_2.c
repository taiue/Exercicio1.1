#include <stdio.h>
void ordenar();
float A, B, C; //utilizei variavel global por facilidade 

int main() {
    
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    ordenar();
    
    printf("A:%.2f, B:%.2f, C:%.2f \n", A, B, C);

    if (A >= B+C) {
        printf("Nao forma triangulo");
    } else if ((A*A) == ((B*B) + (C*C))){
        printf("TRIANGULO RETANGULO");  
    } else if ((A*A) > ((B*B) + (C*C))){
        printf("TRIANGULO OBTUSANGULO");
    } else if ((A*A) < ((B*B) + (C*C))){
        printf("TRIANGULO ACUTANGULO");
    } else if (A == B && A == C){
        printf("TRIANGULO EQUILATERO");
    } else {
        printf("TRIANGULO ISOSCELES");
    }
    
    return 0;
}


void ordenar() {
    float auxiliar;
    
    if(B > A){
        auxiliar = A;
        A = B;
        B = auxiliar;
    }    
    
    if(C > A){
        auxiliar = A;
        A = C;
        C = auxiliar;
    }
    
    if(C > B){
        auxiliar = B;
        B = C;
        C = auxiliar;
    }

    printf(" Teste A:%f, B:%f, C:%f \n", A, B, C);
}