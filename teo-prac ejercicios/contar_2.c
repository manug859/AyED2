/*
ops(for i := 1 to n do
    (ops(for j := 1 to i do
        (ops(for k := j to j+3 do
            (ops(e)+1))))))
*/

#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(void) {
    int t = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            for (int k = j; k <= j+3; k++) {
                t = t + 1;
                printf("k = %d\n", k);
            }
        }
    }    

    printf("t = %d\n", t);

    return EXIT_SUCCESS;
}
