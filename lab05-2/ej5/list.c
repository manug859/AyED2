#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "list.h"

#define MAX_LENGTH 100

struct _list {
    elem elems[MAX_LENGTH];
    int size;
};

list empty() {
    list l = malloc(sizeof(struct _list));
    l->size = 0;
    return l;
}

list addl(elem e, list l) {
    l->elems[(MAX_LENGTH - 1) - l->size] = e;
    l->size += 1;
    return l;  
}

bool is_empty(list l) {
    return l->size == 0;
}

elem head(list l) {
    assert(!is_empty(l));
    return l->elems[MAX_LENGTH - l->size];
}

list tail(list l) {
    assert(!is_empty(l));
    l->size -= 1;
    return l;
}

list addr(list l, elem e) {
    for(int i = MAX_LENGTH - l->size - 1; i < MAX_LENGTH - 1; i++) {
        l->elems[i] = l->elems[i+1]; 
    }
    l->elems[MAX_LENGTH-1] = e;
    l->size += 1;
    return l;
}

int length(list l) {
    return l->size;
}

list concat(list l, list l0) {
    assert(l->size + l0->size <= MAX_LENGTH);
    for(int i = (MAX_LENGTH - 1) - l->size - l0->size; i < MAX_LENGTH - 1 - l0->size; i++) {
        l->elems[i] = l->elems[i + l->size];
    }
    for(int j = (MAX_LENGTH - 1) - l0->size; j < MAX_LENGTH - 1; j++) {
        l->elems[j] = l0->elems[j];
    }
    l->size = l->size + l0->size;
    return l;
}

elem index(list l, int n) {
    assert(n < length(l));
    return l->elems[MAX_LENGTH - l->size + n];
}

list take(list l, int n) {
    if(n <= 0) {
        l->size = 0;
    }
    else if (n <= l->size) {
        for(int i = n-1; i >= 0; i--) {
            l->elems[MAX_LENGTH - 2 + i] = l->elems[MAX_LENGTH - l->size + i];
        }
        l->size = n;
    }
    return l;
}

list drop(list l, int n) {
    if(n >= l->size) {
        l->size = 0;
    } else {
        for(int i = 0; i < l->size - n; i++) {
            l->elems[MAX_LENGTH - l->size + i] = l->elems[MAX_LENGTH - l->size + i + n];
        }
        l->size = l->size - n;
    }
    return l;
}

list copy_list(list l) {
    list p = malloc(sizeof(struct _list));
    p->size = l->size;
    for(int i = 0; i < l->size; i++) {
        p->elems[MAX_LENGTH - l->size + i] = l->elems[MAX_LENGTH - l->size + i];
    }
    return p;
}

void destroy_list(list l) {
    free(l);
}



/*

*/