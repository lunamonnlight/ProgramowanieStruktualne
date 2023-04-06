#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, silnia=1, i=1;
    printf("Podaj n: \n N nie moze byc liczba ujemna\n");
    scanf("%d", &n);
    if (n < 0){
        printf("Podaj liczbe dodatnia.");
    }
    else if( n == 0){
        printf("Silnia wynosi 1.");
    }
    else{
        for (i; i<=n; i++){
            silnia *= i;
        }
    }
    printf("Silnia wynosi %d", silnia);
    return 0;
}
