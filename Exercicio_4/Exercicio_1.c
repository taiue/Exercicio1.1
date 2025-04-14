int tipo_triangulo(float x, float y, float z) {

    if (x + y <= z || x + z <= y || y + z <= x) return 0; 

    if (x == y && y == z) return 1;

    if (x == y || x == z || y == z) return 2;

    return 3;
}

int main() {
    float a, b, c;
    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);
    
    int tipo = tipo_triangulo(a, b, c);
    
    switch (tipo) {
        case 0:
            printf("Os lados fornecidos nao formam um triangulo.\n");
            break;
        case 1:
            printf("Triangulo Equilatero.\n");
            break;
        case 2:
            printf("Triangulo Isosceles.\n");
            break;
        case 3:
            printf("Triangulo Escaleno.\n");
            break;
    }
    
    return 0;
}