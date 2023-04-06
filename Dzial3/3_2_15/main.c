#include <stdio.h>
#include <stdlib.h>

void przepisz(int const *const_ptr, int *var_ptr) {
    *var_ptr = *const_ptr;
}

int main() {
    int const const_var = 42;
    int var = 0;

    przepisz(&const_var, &var);

    printf("const_var = %d, var = %d\n", const_var, var);
    return 0;
}
