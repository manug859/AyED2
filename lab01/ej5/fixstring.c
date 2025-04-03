#include <stdbool.h>
#include <assert.h>

#include "fixstring.h"


unsigned int fstring_length(fixstring s) {
    int length = 0;
    while(s[length] != '\0') length++;
    return length;
}

bool fstring_eq(fixstring s1, fixstring s2) {
    bool res = true;
    unsigned int i = 0;
    while(s1[i] != '\0' && s1[i] == s2[i]) i++;
    return res = s1[i] == s2[i];
}

bool fstring_less_eq(fixstring s1, fixstring s2) {
    bool res = true;
    unsigned int i = 0;
    while(s1[i] != '\0' && s1[i] == s2[i]) i++;
    return res = s1[i] <= s2[i];
}

void fstring_set(fixstring s1, const fixstring s2) {
    int i=0;
    while (i<FIXSTRING_MAX && s2[i]!='\0') {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

void fstring_swap(fixstring s1,  fixstring s2) {
    fixstring aux = {'\0'};
    fstring_set(aux, s1); // (aux,s1) fstring_set(s1, aux)
    fstring_set(s1,s2);   // (s1,s2)  fstring_set(s2, s1)
    fstring_set(s1, aux); // (s1,aux) fstring_set(aux, s1)
}


