#include <stdio.h>
#include <stdlib.h>

void przepisz(const int* const_ptr, int* int_ptr) {
    *int_ptr = *const_ptr;
}

int main() {
    const int a = 5;
    int b = 0;

    przepisz(&a, &b);

    printf("a = %d\n", a); // a = 5
    printf("b = %d\n", b); // b = 5

    return 0;
}
