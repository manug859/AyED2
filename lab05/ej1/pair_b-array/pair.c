#include "pair.h"


pair_t pair_new(int x, int y) {
    pair_t p;

    p.values[0] = x;
    p.values[1] = y;
    
    return p;
}

int pair_first(pair_t p) {
    int fst;

    fst = p.values[0];

    return fst;
}

int pair_second(pair_t p) {
    int snd;

    snd = p.values[1];

    return snd;
}

pair_t pair_swapped(pair_t p) {
    pair_t q;

    q.values[0] = p.values[1];
    q.values[1] = p.values[0];

    return q;
}

pair_t pair_destroy(pair_t p) {
    return p;
}