#include <stdio.h>

int main()
{

    int a[10];
    float b[10];
    
    for (int i = 0; i<10;i++){
        int v;
        scanf("%d", &v);
        a[i] = v;
    }
        for (int i = 0; i<10;i++){
        printf("%d \n", a[i]);
    }
    
    
    for (int i = 0; i < 10; i++)
    {
        if(a[i] % 2 == 0) b[i] = a[i]/2;
        else b[i] = a[i]/3;
    }
    
    for (int i = 0; i<10;i++){
        printf("%.2f \n", b[i]);
    }

}