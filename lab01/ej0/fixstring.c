#include <stdbool.h>
#include <assert.h>
/* gonzalo.peralta@unc.edu.ar */
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
    while(s1[i] != '\0' && s1[i] == s2[i]) 
        i++;
    return (s1[i] <= s2[i]);
}