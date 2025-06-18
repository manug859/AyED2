#include <limits.h>
#include <stdio.h>
#include "knapsack.h"

#define MAX(a, b) ((a) > (b) ? (a) : (b))

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
 * @brief Resuelve el problema de la mochila
 *
 * @param values valores de los objetos
 * @param weights pesos de los objetos
 * @param n cantidad de objetos
 * @param W capacidad de la mochila
 */
int knapsack(int values[], int weights[], int n, int W) {
    int table[n+1][W+1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            if (i == 0 || j == 0) {
                table[i][j] = 0;
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= W; j++) {
            if(weights[i-1] <= j) {
                table[i][j] = MAX(table[i-1][j], table[i-1][j - weights[i-1]] + values[i-1]);

            } else {
                table[i][j] = table[i-1][j];
            }
        }
    }
    
    printf("\n");
    print_table(n+1, W+1, table);
    printf("\n");
    printf("table[%d][%d] = %d\n", n, W, table[n][W]);
    
    return table[n][W] == INT_MAX ? -1 : table[n][W];
}