#include <stdio.h>
#include <stdlib.h>
#include "cima.h"

int main(void) {
<<<<<<< HEAD
    int a[] = {-2, 8, 9, 5, 0};
=======
    int a[] = {1, 2, 3, 4, 5};
>>>>>>> f8f5f07 (push masivo)
    int length = 5;
    int result;

    result = cima(a, length);

    printf("Resultado: %i\n", result);

    return EXIT_SUCCESS;
}
