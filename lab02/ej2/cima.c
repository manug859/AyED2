#include <stdio.h>
#include <stdbool.h>
#include "cima.h"

/**
 * @brief Indica si el arreglo tiene cima.
 *
 * Un arreglo tiene cima si existe una posición k tal que el arreglo es
 * estrictamente creciente hasta la posición k y estrictamente decreciente
 * desde la posición k.
<<<<<<< HEAD
=======
 * 
 * 
>>>>>>> f8f5f07 (push masivo)
 *
 * @param a Arreglo.
 * @param length Largo del arreglo.
 */
bool tiene_cima(int a[], int length) {
<<<<<<< HEAD

    // COMPLETAR!!

    return false;
=======
    
    int k = 0;

    bool res;

    while(k < length - 1 && a[k] < a[k+1]) {
        k++;
    }

    int j = k; 
    
    while (j < length - 1 && a[j] > a[j+1]) {
        j++;
    }
    
    res = j == length - 1;

    return res;
>>>>>>> f8f5f07 (push masivo)
}

/**
 * @brief Dado un arreglo que tiene cima, devuelve la posición de la cima.
 *
 * Un arreglo tiene cima si existe una posición k tal que el arreglo es
 * estrictamente creciente hasta la posición k y estrictamente decreciente
 * desde la posición k.
 * La cima es el elemento que se encuentra en la posición k.
 * PRECONDICION: tiene_cima(a, length)
 *
 * @param a Arreglo.
 * @param length Largo del arreglo.
 */
int cima(int a[], int length) {

<<<<<<< HEAD
    // COMPLETAR!!

    return 0;
}
=======
    int k = 0;

    while(k < length - 1 && a[k] < a[k+1]) {
        k++;
    }
      
    return k;
}
>>>>>>> f8f5f07 (push masivo)
