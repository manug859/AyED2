#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"
#include "fixstring.h"


static unsigned int partition(fixstring a[], unsigned int izq, unsigned int der) {
    unsigned int i, j, pivot;
    
    pivot = izq;
    i = izq+1;
    j = der;

    while(i <= j) {
        printf("\t (%s) %d (%s) %d (%s)\n", a[pivot], i, a[i], j, a[j]);
        printf("%d %d %d", goes_before(a[i], a[pivot]), goes_before(a[pivot], a[j]), !goes_before(a[i], a[pivot]) && !goes_before(a[pivot], a[j]));

        
        if(goes_before(a[i], a[pivot])) i++;
        else if(goes_before(a[pivot], a[j])) j--;
        else if(!goes_before(a[i], a[pivot]) && !goes_before(a[pivot], a[j])) { 
            printf("swap");
            swap(a, i, j);
        }
    }
    swap(a, pivot, j);
    pivot = j;

    return pivot;
}

static void quick_sort_rec(fixstring a[], unsigned int izq, unsigned int der, unsigned int length) {
    unsigned int pivot;

        if(der > izq) {
            pivot = partition(a, izq, der);
            quick_sort_rec(a, izq, (pivot == 0) ? 0 : pivot-1, length);
            quick_sort_rec(a, (pivot+1), der, length);
        }
}

void quick_sort(fixstring a[], unsigned int length) {
    quick_sort_rec(a, 0, (length == 0) ? 0 : length - 1, length);
}


