#include <stdio.h>
#include <math.h>

int main(){
    int v[100];
    int v2[101];
    int v3[100];


    for (int i = 0; i < 100; i++)
    {
        v[i] = 71;
    }

    for (int i = 1; i < 101; i++)
    {
        v2[i] = i;
    }

    for (int i = 0; i < 100; i++)
    {
        if (sqrt(i) == (int)sqrt(i))
        v3[i] = 1;
        else 
        v3[i] = 0;
        
    }
    
    for (int s = 0; s < 2; s++)
    {
        for (int i = 0; i < 100; i++)
        {
            printf("%d ", v[i]);
        }
        
        printf("\n--------------------------------------------------\n");

        for (int i = 1; i <= 100; i++)
        {
            printf("%d \n", v2[i]);
        }

        printf("\n--------------------------------------------------\n");
        
        for (int i = 0; i < 100; i++)
        {
            printf("%d ", v3[i]);
        }

    }
    
    return 0;
}