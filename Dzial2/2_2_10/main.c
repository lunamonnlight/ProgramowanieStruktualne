#include <stdio.h>
#include <stdlib.h>


unsigned int NWD(unsigned int i, unsigned int n){
 while (i!=n){
    if(i>n){
        i-=n;
        }
    else{
        n-=i;
    }
}
return i;
}
unsigned int suma(unsigned int n){
    int i, sum=0;
    for(i=1;i<n;i++){
        if (NWD(i,n)==1)
            sum += i;
    }
    return sum;
}
int main (){
    int n;
    printf("Podaj liczbe calkowita n: ");
    scanf ("%d",&n);
    printf("Wynik obliczen to:%d \n",suma(n));
    return 0;
}
