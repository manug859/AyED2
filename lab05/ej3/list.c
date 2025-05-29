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

list addl(list l, list_elem e) {
    list p = malloc(sizeof(list));
    p->elem = e;
    p->next = l;
    p = l;
    return l;
}