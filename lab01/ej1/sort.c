#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"


static void insert(int a[], unsigned int i, unsigned int length) {
    
    assert(i<length);
    unsigned int j = i;

    while(j > 0 && goes_before(a[j], a[j-1])) 
    {
        swap(a, j-1, j);
        j--;
        array_dump(a, length);
    }       
}

void insertion_sort(int a[], unsigned int length) {
    for (unsigned int i = 1; i < length; ++i) {
        insert(a, i, length);
        assert(array_is_sorted(a, i));
    }
}
