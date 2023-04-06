#include <stdio.h>
#include <stdlib.h>

int silnia(int n){
if (n<2){
    return 1;
}
else{
    return n * silnia(n-1);
}
}

int main()
{
     int n;
    printf("Podaj n: \n N nie moze byc liczba ujemna\n");
    scanf("%d", &n);
    int wynik = silnia(n);
    printf("Silnia wynosi %d", wynik);
}
