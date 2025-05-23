#include "pair.h"

pair_t pair_new(int x, int y) {
    pair_t p;
    p.fst = x;
    p.snd = y;
    return p;
}

int pair_first(pair_t p) {
    int fst;
    fst = p.fst;
    return fst;
}

int pair_second(pair_t p) {
    int snd;
    snd = p.snd;
    return snd;
}

pair_t pair_swapped(pair_t p) {
    pair_t q;
    q.fst = p.snd;
    q.snd = p.fst;
    return q;
}

pair_t pair_destroy(pair_t p){
    return p;
}
