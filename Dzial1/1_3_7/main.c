#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a, b, c, delta, x1, x2;
    printf("Podaj a:\n");
    scanf("%lf", &a);
    printf("Podaj b:\n");
    scanf("%lf", &b);
    printf("Podaj c:\n");
    scanf("%lf", &c);
    if (a==0){
        printf("a nie moze byc rowne 0.\n");
    }
    else{
        delta = (b*b) - (4*a*c);
        if (delta > 0){
            x1 = (-b-(sqrt(delta)))/(2*a);
            x2 = (-b+(sqrt(delta)))/(2*a);
            printf("Rozwiazania to: %lf i %lf\n", x1, x2);
        }
        else if(delta == 0){
            x1 = (-b)/(2*a);
            printf("Rozwiazanie to: %lf\n", x1);
        }
        else if(delta <0){
            printf("Rownanie nie ma rozwiazan rzeczywistych\n");
        }
    }
    return 0;
}
