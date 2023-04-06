#include <stdio.h>
#include <stdlib.h>


void foo(int a, int b, int *liczba1, int *liczba2, int *liczba3){
    liczba3=&a;
    liczba1=&b;
    liczba2=&a;
    printf("Zmieniona wartosc liczby a: %d\n", *liczba1);
    printf("Zmieniona wartosc liczby b: %d\n", *liczba2);
}
int main()
{
    int a, b;
    int *liczba1=&a;
    int *liczba2=&b;
    int *liczba3;
    printf("Podaj liczbe a:\n");
    scanf("%d", &a);
    printf("Podaj liczbe b:\n");
    scanf("%d", &b);
    foo(a, b, liczba1, liczba2, liczba3);
}
