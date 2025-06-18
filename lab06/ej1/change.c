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

int mejor_moneda(int d[], int r, int n) {
    //printf("estoy en MEJOR MONEDA\n");
    int moneda_actual = -1;

    for(int i = 0; i < n; i++) {
        if(d[i] <= r && d[i] > moneda_actual) {
            moneda_actual = d[i];
            //printf("%d\n", moneda_actual);
        }
    }

    return moneda_actual;
}

/**
 * @brief Resuelve el problema de la moneda
 *
 * @param d denominaciones
 * @param n cantidad de denominaciones
 * @param k monto a pagar
 */
int change(int d[], int n, int k) {
   
    int moneda;
    int cantidad_monedas = 0;
    int resto = k;

    while(resto > 0) {
        moneda = mejor_moneda(d, resto, n);
      //  printf("imprimo la moneda que elegió mejor moneda = %d\n", moneda);
        cantidad_monedas = cantidad_monedas + (resto / moneda);
        resto = resto % moneda;
    }   
    return cantidad_monedas;
}