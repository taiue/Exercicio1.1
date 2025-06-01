// 1) Os elementos de uma matriz em C são armazenados um após o outro.
//      Por exemplo, em uma matriz int v[5] = {1, 2, 3, 4, 5}, 
//      os valores são armazenados um ao lado do outro na memória, e o endereço de v[1] é o endereço de v[0] + sizeof(int)
----------------------------------------------------------------------------------------
// 2) Duas maneiras de obter o endereço do primeiro elemento da matriz data[]:
//      1 - &data[0]
//      2 - data (o nome da matriz já representa o endereço do primeiro elemento)
----------------------------------------------------------------------------------------
// 3) Quando uma matriz é passada para uma função, como determinar onde ela termina?
//      Duas maneiras:

//      Passar o tamanho como argumento:
//      Ex: void func(int arr[], int size)

//      Terminar com um valor sentinela, como '\0' em strings, para indicar o fim.

----------------------------------------------------------------------------------------
// 4) Seis operações que podem ser feitas com ponteiros:
//      Atribuição: p = &x;

//      Acesso/indireção: *p
//      Aritmética: p + 1, p - 1
//      Comparação: p1 == p2, p1 < p2
//      Subtração entre ponteiros do mesmo array: p2 - p1
//      Incremento e decremento: p++, --p

//      Duas operações que NÃO podem ser feitas:
//      Multiplicação de ponteiros: p * 2
//      Soma de dois ponteiros: p1 + p2



// 5) Subtração entre ponteiros p2 - p1, apontando para elementos 4 e 3:
// Resultado: 1


// 6) Com float no lugar de int:
// A subtração também resultaria em 1, pois a diferença é em número de elementos, independente do tamanho em bytes.





// 7)
void questao7(){
    int x = 1, y = 2, z[10]; // atribuição de valores
    int *ip; // inicia ponteiro sem apontar para espaço em memoria especifico
    
    ip = &x;     // ip aponta para x
    y = *ip;     // y recebe o valor apontado por ip (1)
    *ip = 0;     // o valor de x é alterado para 0 via ponteiro
    ip = &z[0];  // ip agora aponta para o primeiro elemento do vetor z
}

void questao8(){
int *ip = 10;

    y = *ip + 1; // Soma 1 ao valor apontado e armazena em y. y = 11

    *ip += 1; // Incrementa o valor apontado por ip. *ip = *ip + 1

    ++*ip; // Pré-incrementa o valor apontado por ip. *ip = *ip + 1
    // equivale a *p = *p + 1; depois usa o novo valor de *p

    (*ip)++; // Pós-incrementa o valor apontado. Primeiro usa o valor, depois incrementa.
    // usa o valor atual de *p, depois faz *p = *p + 1
}


void questao9(){
    aux = a[2];            // com pa: aux = *(pa + 2);
    aux = a[i];            // com pa: aux = *(pa + i);
    aux = a[2];            // com a:  aux = *(a + 2);
    aux = a[i];            // com a:  aux = *(a + i);
    (a + 2)                // com a:  &a[2]
    (pa + 1)               // com a:  &a[1]

}

void questao10(){
    int x[5];       // vetor de 5 inteiros
    int *px;        // ponteiro para inteiro
    int i;

    px = x;         // px aponta para o início da matriz

    // Primeira repetição
    for(i=0; i<5; i++) {
        printf("%i", *px); // imprime valor apontado
        px++;              // avança o ponteiro
    }

    // Segunda repetição
    px = x;
    for(i=0; i<5; i++) {
        printf("%i", *(px + i)); // acesso por índice
    }
}

// 11) Diferença entre os dois laços:
//      1º laço: o ponteiro px é incrementado a cada iteração (px++)
//      2º laço: px permanece fixo, mas o deslocamento é feito com índice (*(px + i))


void questao12()
{
    int x[5];
    ...
    int *px;
    int i;

    px = x; 
    for(i=0;i<5;i++)
    {
        printf("\n%i", *(px++)); //Imprime o valor apontado por px efaz pós-incremento de px
    }
...
}
