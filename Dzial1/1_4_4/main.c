#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, silnia=1;
    int i=1;
    printf("Podaj n:\n");
    scanf("%d", &n);
    for (i; i <= n; i++){
        silnia *= i;
    }
    printf("Silnia wynosi: %d", silnia);
    return 0;
}
