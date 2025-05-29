#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

#include "list.h"

struct _list {
    list_elem elem;
    struct _node* next;
};

list empty(void) {
    list l = NULL;
    return l;
}

list addl(l, e) {
    
}