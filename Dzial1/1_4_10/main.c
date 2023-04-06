#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double n;
    int wynik;
    printf("Podaj n: \n");
    scanf("%lf", &n);
    wynik = sqrt(n);
    printf("Wynik: %d", wynik);
    return 0;
}
