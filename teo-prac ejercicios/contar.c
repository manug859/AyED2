/*
ops(a)
ops(for i := 1 to n do 
    (ops((for  j:=1 to n² do 
        (ops(for k:=1 to n³ do 
            (ops(e)+1)))))))
*/

#include <stdio.h>
#include <stdlib.h>

#define N 25

int main(void) {
    int t = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < (N*N); j++) {
            for(int k = 0; k < (N*N*N); k++) {
                t = t+1;
            }
        }
    }
    printf("t = %d\n", t);

    return EXIT_SUCCESS;
}