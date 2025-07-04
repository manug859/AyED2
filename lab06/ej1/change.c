#include <limits.h>
#include <stdio.h>
#include "change.h"

#define MIN(a, b) ((a) < (b) ? (a) : (b))

void print_table(int n, int k, int table[n][k]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (table[i][j] == INT_MAX) {
                printf("INF\t");
            } else {
                printf("%d\t", table[i][j]);
            }
        }
        printf("\n");
    }
}

/**
 * @brief Resuelve el problema de la moneda
 *
 * @param d denominaciones
 * @param n cantidad de denominaciones
 * @param k monto a pagar
 */
int change(int d[], int n, int k) {
   int table[n+1][k+1];

   for(int i = 0; i <= n; i++) {
    table[i][0] = 0;
   }
   for(int j = 0; j <= k; j++) {
    table[0][j] = INT_MAX;
   }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            if(d[i-1] > j) {
                table[i][j] = table[i-1][j];
            } else {
                table[i][j] = MIN(table[i-1][j], 1 + table[i][j - d[i-1]]);
            }
        }
    }

    printf("\n");
    print_table(n+1, k+1, table);
    printf("\n");
    printf("table[%d][%d] = %d\n", n, k, table[n][k]);
    
    return table[n][k] == INT_MAX ? -1 : table[n][k];
}