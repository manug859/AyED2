#include <assert.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

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
    list p = malloc(sizeof(struct _list));
    p->elem = e;
    p->next = l;
    return p;
}

void destroy(list l) {
    list k = l;
    while(k !=  NULL) {
        list next = k->next;
        free(k);
        k = next;
    }
}

// operaciones !

bool is_empty(list l) {
    return l == NULL;
}

list_elem head(list l) {
    return l->elem;
}

list tail(list l) {
    list p = l;
    l = l->next;
    free(p);
    return l;
}

list addr(list l, list_elem e) {
    list q = malloc(sizeof(struct _list));
    q->elem = e;
    q->next = NULL;
    if(!is_empty(l)){
        list p = l;
        while(p->next != NULL) {
            p = p->next;
        }
        p->next = q;
    }
    else {
        l = q;
    }
    return l;
}

int length(list l) {
    int n = 0;
    list p = l;

    while(p != NULL) {
        n++;
        p = p->next;
    }
    return n;
}

list concat(list l, list l0) {
    list p = l;

    while (p->next != NULL) {
        p = p->next;
    }
    p->next = l0;
    return l;
}

list_elem index(list l, int n) {
    list p = l;
    for(int i = 0; i < n; i++) {
        p = p->next;
    }
    return p->elem;
}

list take(list l, int n) {
    list p = l;
    for(int i = 0; i < n; i++) {
        p = p->next;
    }
    destroy(p);
    return l;
}

