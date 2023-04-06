#include <stdio.h>
#include <stdlib.h>

int suma(int n){
if (n == 0 || n ==1){
    return 1;
}
else{
    return (n-1)+ suma(n-1);
}
}

int main()
{
    int n;
    printf("Podaj n: \n");
    scanf("%d", &n);
    if(n <0){
        printf("podaj liczbe wieksza od 0");
    }
    else{
    printf("Wynik: %d", suma(n));}
    return 0;

}
