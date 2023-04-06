#include <stdio.h>
#include <stdlib.h>

void funkcja(int zmienna1, int zmienna2, int *wskaznik1, int *wskaznik2){

    if(*wskaznik1>*wskaznik2){
        printf("Mniejsza jest zmienna2: %d, jej adres %p", zmienna2, wskaznik2);
    }
    else if (*wskaznik1<*wskaznik2){
        printf("Mniejsza jest zmienna1: %d, jej adres %p", zmienna1, wskaznik1);
    }
    else{
        printf("Zmienne sa rowne");
    }
    }
int main()
{
    int zmienna1, zmienna2;
    int *wskaznik1 = &zmienna1, *wskaznik2 = &zmienna2;
    printf("Podaj zmienna1: \n");
    scanf("%d", &zmienna1);
    printf("Podaj zmienna2: \n");
    scanf("%d", &zmienna2);
    funkcja(zmienna1, zmienna2, wskaznik1, wskaznik2);
    return 0;
}
