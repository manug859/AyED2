#include <stdbool.h>
#include <stdio.h>
#include "knapsack.h"

#define MAX_OBJECTS 10
#define N_TESTCASES 4

int main() {
    // representación de un solo caso de test
    struct testcase {
        int values[MAX_OBJECTS];   // valores de los objetos
        int weights[MAX_OBJECTS];  // pesos de los objetos
        int n;                     // cantidad de objetos
        int W;                     // capacidad de la mochila
        int result;                // resultado esperado: máximo valor posible
    };

    // casos de test (uno por línea): { values, weights, n, W, result }
    struct testcase tests[N_TESTCASES] = {
      { {3, 2, 3, 2}, {8, 5, 7, 3}, 4, 16, 7 },  // testea: knapsack({3, 2, 3, 2}, {8, 5, 7, 3}, 4, 16) == 7
      { {1, 2, 3, 4, 5}, {5, 4, 3, 2, 1}, 5, 10, 14 }, // testea: knapsack({1, 2, 3, 4, 5}, {5, 4, 3, 2, 1}, 5, 10) == 14
      { {10, 20}, {60, 100}, 2, 50, 0 }, // testea: knapsack({10, 20}, {60, 100}, 2, 50) == 0
      { {1}, {1}, 1, 0, 0 } // testea: knapsack({1}, {1}, 1, 0) == 0
    };

    int result;

    printf("TESTING knapsack\n");

    for (int i=0; i < N_TESTCASES; i++) {
        printf("Test case %i: ", i+1);

        // TEST! llamamos la función a knapsack
        result = knapsack(tests[i].values, tests[i].weights, tests[i].n, tests[i].W);

        // comparamos resultado obtenido con resultado esperado
        if (result == tests[i].result) {
            printf("OK\n");
        } else {
            printf("FAILED: got %d expected %d\n", result, tests[i].result);
        }
    }

    return 0;
}
