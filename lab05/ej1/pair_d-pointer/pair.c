#include <stdlib.h>
#include <assert.h>

#include "pair.h"

struct s_pair_t {
    int fst;
    int snd;

}; //NOTA: Este struct es GARANTIZA EL ENCAPSULAMIENTO                 ES UN AGREGADO PARA QUE FUNCIONE!!!!!!!!!!!!!!11!!

pair_t pair_new(int x, int y) {
    pair_t p = malloc(sizeof(struct s_pair_t));

    p->fst = x;
    p->snd = y;

    return p;
}

int pair_first(pair_t p) {
    int fst = p->fst;
    return fst;
}

int pair_second(pair_t p) {
    int snd = p->snd;
    return snd;
}

pair_t pair_swapped(pair_t p) {
   return pair_new(p->snd, p->fst);
}

pair_t pair_destroy(pair_t p) {
    free(p);
    return p;
}