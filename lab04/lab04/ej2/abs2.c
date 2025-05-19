#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void absolute(int x, int *y) {
    if ( x >= 0 ) {
        *y = x;
    } else {
        *y = -x;
    }
}

int main(void) {
    int a=0, res=0;  // No modificar esta declaración
    // --- No se deben declarar variables nuevas --- //

    absolute(a, &res);
    printf("res = %d \n", res);

    assert(res >= 0 && (res == a || res == -a));
    return EXIT_SUCCESS;
}

