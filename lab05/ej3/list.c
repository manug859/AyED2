#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

#include "list.h"

struct _list {
    list_elem elem;
};

list empty(void) {
    list l = malloc(sizeof(list));
    l->elem = 0;
    return l;
}

list addl(list_elem e) {
    
}