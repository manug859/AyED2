#include "pair.h"

pair_t pair_new(int x, int y) {
    pair_t p = malloc(sizeof(struct s_pair_t));

    p->fst = x;
    p->snd = y;

    return p;
}

int pair_first(pair_t p) {
    int fst = p->fst;
    return ;
}

int pair_second(pair_t p) {
    int snd = p->snd;
    return snd;
}

pair_t pair_swapped(pair_t p) {
    /*
    pair_t q = malloc(sizeof(struct s_pair_t));

    q->fst = p->snd;
    q->snd = p->fst;

    return q;
    con alejo, pensamos que esto era lo más eficiente, peroooo, llegó luque y dijo:
    */

    return pair_new(p->snd, p->fst);
}

pair_t pair_destroy(pair_t p) {
    free(p);
    return p;
}