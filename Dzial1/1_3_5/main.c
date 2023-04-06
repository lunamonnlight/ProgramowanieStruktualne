#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int cyfra;
    double a, h, pole, b, c, p;
    printf("Obliczamy pole trojkata. Jezeli chcesz podac wysokosc i podstawe, wscisnij 1, jezeli chcesz podac boki trojkata, podaj 2.\n");
    scanf("%d",&cyfra);
    if (cyfra == 1){
        printf("Podaj dlugoscf podstawy: \n");
        scanf("%lf", &a);
        printf("Podaj wysokosc: \n");
        scanf("%lf", &h);
        pole = (a * h)/2;
        printf("Pole wynosi %lf", pole);
    }
    else if(cyfra == 2){
        printf("Podaj dlugosc 1 boku: \n");
        scanf("%lf", &a);
        printf("Podaj dlugosc 2 boku: \n");
        scanf("%lf", &b);
        printf("Podaj dlugosc 3 boku: \n");
        scanf("%lf", &c);
        p = (a+ b + c)/3;
        pole = sqrt(p * ((p-a)*(p-b)*(p-c)));
        printf("Pole wynosi %lf", pole);
    }
    else{
        printf("Podaj 1, lub 2.\n");
    }
    return 0;
}
