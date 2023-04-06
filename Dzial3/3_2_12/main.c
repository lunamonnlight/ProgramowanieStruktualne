#include <stdio.h>
#include <stdlib.h>

double* allocate_3_2_12(int n) {
    double* ptr = malloc(sizeof(double) * n);
    return ptr;
}

int main(void) {
    int n = 5;
    double* my_array = allocate_3_2_12(n);

    for (int i = 0; i < n; i++) {
        my_array[i] = i * 2.5;
        printf("my_array[%d]: %lf\n", i, my_array[i]);
    }

    free(my_array);
    return 0;
}
