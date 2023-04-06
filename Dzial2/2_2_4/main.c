#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, potega;
    printf("Podaj liczbe calkowita n: \n");
    scanf("%d", &n);
    potega = pow(2, n);
    printf("2 do n wynosi: %d", potega);
    return 0;
}
