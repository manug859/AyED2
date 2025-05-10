#include <stdlib.h>
#include <stdio.h>

void absolute(int x, int y) {
    if(x >= 0) {
        y = x;
    } else {
        y = -x;
    }
}

int main(void) {
    int a=0, res=0;
    absolute(a, res);
    printf("res = %d \n", res);
    return EXIT_SUCCESS;
}

//¿Qué valor se mostraría al ejecutar la  función main() del programa anterior?
// 0
