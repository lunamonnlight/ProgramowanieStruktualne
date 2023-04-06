#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double a, b, wynik;
    printf("Jakie chcesz wykonac dzialanie.\n Wcisnij 1, aby dodawac\n. Wcisnij 2, aby odejmowac\n Wcisnij 3, aby mnozyc\n Wcisnij 4, aby dzielic\n");
    scanf("%d", &x);
    if (x == 1){
        printf("Podaj a:\n");
        scanf("%lf", &a);
        printf("Podaj b:\n");
        scanf("%lf", &b);
        wynik = a +b;
        printf("Wynik wynosi: %lf", wynik);
    }
    else if(x == 2){
        printf("Podaj a:\n");
        scanf("%lf", &a);
        printf("Podaj b:\n");
        scanf("%lf", &b);
        wynik = a-b;
        printf("Wynik wynosi: %lf", wynik);
    }
    else if(x == 3){
        printf("Podaj a:\n");
        scanf("%lf", &a);
        printf("Podaj b:\n");
        scanf("%lf", &b);
        wynik = a * b;
        printf("Wynik wynosi: %lf", wynik);
    }
    else if( x == 4 ){
        printf("Podaj dzielna:\n");
        scanf("%lf", &a);
        printf("Podaj dzielnik:\n");
        scanf("%lf", &b);

        if (b == 0){
            printf("Nie da sie dzielic przez 0\n");
        }
        else{
                wynik = a /b;
            printf("Wynik wynosi: %lf", wynik);
        }
    }
    else {
        printf("podaj liczbe z zakresu od 1 do 4.\n");
    }
    return 0;
}
