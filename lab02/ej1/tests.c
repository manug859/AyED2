#include <stdbool.h>
#include <stdio.h>
#include "k_esimo.h"

#define MAX_LENGTH 5
<<<<<<< HEAD
#define N_TESTCASES 1
=======
#define N_TESTCASES 16
>>>>>>> f8f5f07 (push masivo)

struct testcase {
    int a[MAX_LENGTH];
    int length;
    int k;
    int result;
};

int main() {
    struct testcase tests[N_TESTCASES] = {
      // arreglo, largo, k, resultado esperado
<<<<<<< HEAD
      { {8}, 1, 0, 8 },

      // COMPLETAR!!
=======
    { {8}, 1, 0, 8 },
    { {3, 1, 4, 1, 5}, 5, 2, 4 },
    { {10, 20, 30, 40, 50}, 5, 4, 50 },
    { {7, 2, 9, 3, 6}, 5, 0, 7 },
    { {15, 25, 35, 45, 55}, 5, 3, 45 },
    { {100, 200, 300, 400, 500}, 5, 1, 200 },
    { {8, 6, 7, 5, 3}, 5, 2, 7 },
    { {1, 1, 1, 1, 1}, 5, 4, 1 },
    { {9, 8, 7, 6, 5}, 5, 0, 9 },
    { {2, 4, 6, 8, 10}, 5, 3, 8 },
    { {11, 22, 33, 44, 55}, 5, 2, 33 },
    { {0, -1, -2, -3, -4}, 5, 1, -1 },
    { {99, 88, 77, 66, 55}, 5, 4, 55 },
    { {5, 10, 15, 20, 25}, 5, 3, 20 },
    { {3, 6, 9, 12, 15}, 5, 2, 9 },
    { {42, 24, 12, 6, 3}, 5, 0, 3 }
>>>>>>> f8f5f07 (push masivo)

    };
    int result;

    printf("TESTING k_esimo\n");

    for (int i=0; i < N_TESTCASES; i++) {
        printf("Test case %i: ", i+1);

        result = k_esimo(tests[i].a, tests[i].length, tests[i].k);
        if (result == tests[i].result) {
            printf("OK\n");
        } else {
            printf("FAILED\n");
        }
    }

    return 0;
}
