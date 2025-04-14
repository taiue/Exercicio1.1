#include <stdio.h>

int main() {
    int n;
    float  n1, n2, n3, media;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &n1);
        scanf("%f", &n2);
        scanf("%f", &n3);

        n1 *= 2;
        n2 *= 3;
        n3 *= 5;
        printf("valores: %.1f %.1f %.1f \n", n1, n2, n3);

        media = (n1 + n2 + n3)/10;
        printf("media: %.1f", media);
    }
    
    return 0;
}