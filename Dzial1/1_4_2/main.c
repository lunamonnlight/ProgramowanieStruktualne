#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    printf("Podaj m:\n");
    scanf("%d", &m);
    printf("Podaj n:\n");
    scanf("%d", &n);
    printf("wielokrotnosci liczby m: ");
    for (int i=1; i <= n; i++){
        printf("%d, ", m*i);
    }
    return 0;
}
