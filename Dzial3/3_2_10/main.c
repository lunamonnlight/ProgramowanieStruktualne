#include <stdio.h>
#include <stdlib.h>

double* allocate_3_2_10(void) {
    double* ptr = malloc(sizeof(double));
    return ptr;
}

int main(void) {
    double* my_double = allocate_3_2_10();
    *my_double = 3.14;
    printf("wartosc my_double: %f\n", *my_double);
    free(my_double);
    return 0;
}
