#include <stdio.h>
#include <stdlib.h>

int NWD(int n, int m){
while (n!=m){
    if(n>m){
        n-=m;
        }
    else{
        m-=n;
    }
}
return m;
}

int main()
{
    int n, m;
    printf("Podaj n: \n");
    scanf("%d", &n);
    printf("Podaj m: \n");
    scanf("%d", &m);

    printf("NWD: %d", NWD(n,m));
    return 0;
}
