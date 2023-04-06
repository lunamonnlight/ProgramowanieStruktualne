#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int iloczyn=1;
    int a =2;
    printf("Podaj n (N musi byc wieksze niz 2):\n");
    scanf("%d", &n);
    if (n%2 == 0){
        do{
               iloczyn *=a;
               a+2;
        }while(a<=n);
        printf("Iloczyn wynosi: %d", iloczyn);
    }
    else{
        do{
               iloczyn *=a;
               a+2;
        }while(a<n);
        iloczyn *= (n-1);
        printf("Iloczyn wynosi: %d", iloczyn);
    }
    return 0;
}
