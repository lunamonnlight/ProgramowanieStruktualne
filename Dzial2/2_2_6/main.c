#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,m, potega;
    printf("podaj n: \n");
    scanf("%d", &n);
    printf("podaj m: \n");
    scanf("%d", &m);
    potega = pow(n, m);
    printf("Wynik to: %d", potega);
    return 0;
}
