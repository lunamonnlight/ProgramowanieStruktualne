#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    double srednia;
    printf("Podaj trzy liczby aby otrzymac srednia: \n");
    scanf("%d%d%d", &a, &b, &c);
    srednia = (a + b + c) /3;
    printf("Srednia wynosi %lf\n", srednia);

    return 0;
}
