#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Podaj n: \n");
   scanf("%d", &n);
   int* w = &n;
   printf("wskaznik wynosi: %p", w);
}
