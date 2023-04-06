#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,m;
    double suma;
    printf("Podaj n: \n");
    scanf("%d", &n);
    printf("Podaj m: \n");
    scanf("%d", &m);
    if (n<0 || m<=1){
        printf("Podaj n wieksze od 0 i m wieksze od 1");
    }
    else{
        for (int i =0; i<=n;i++){
            suma+=pow(i, 1/m);
        }
    }
    printf("Wynik wynosi: %lf", suma);
    return 0;
}
