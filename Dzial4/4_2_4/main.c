#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void foo(int n, unsigned int tab[]){
int mnozenie = 1;
   for (int i=0; i<n;i++){
    mnozenie*=tab[i];
   }
   double wynik = pow(mnozenie, 1/n);
   printf("%lf", wynik);
}

void WyswietlTablice(int n, unsigned int tab[]){
for(int i=0;i<n;i++){
    printf("[%d] = %d\n", i, tab[i]);
}
printf("---\n");
}
int main()
{
    unsigned int tab1[] = {2,-3,4,-5,1,9, 7, 2, 7};
    WyswietlTablice(sizeof(tab1)/sizeof(tab1[0]), tab1);
    foo(sizeof(tab1)/sizeof(tab1[0]), tab1);

}
