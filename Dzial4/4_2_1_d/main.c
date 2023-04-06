#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab[]){
    for(int i=0; i<n;i++){
        tab[i]=abs(tab[i]);
    }
}

void WyswietlTablice(int n, int tab[]){
for(int i=0;i<n;i++){
    printf("[%d] = %d\n", i, tab[i]);
}
printf("---\n");
}
int main()
{
    int tab1[] = {3,4,5};
    int tab2[] = {2,-3,4,-5,0,9};
    WyswietlTablice(3, tab1);
    WyswietlTablice(6, tab2);
    foo(3, tab1);
    foo(6, tab2);
    WyswietlTablice(3, tab1);
    WyswietlTablice(6, tab2);
}
