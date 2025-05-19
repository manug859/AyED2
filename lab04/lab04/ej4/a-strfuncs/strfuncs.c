#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "strfuncs.h"

size_t string_length(const char *str) {
    size_t length = 0;
    while(str[length] != '\0') {
        length++;
    }
    return length;
}

char *string_filter(const char *str, char c) {

   char *str_copy = NULL;                   
   str_copy = malloc(string_length(str));   
   
   size_t i = 0;                            
   size_t j = 0;                       

   size_t length = string_length(str); 

   while (i<length) {
        if(str[i] != c) {
            str_copy[j] = str[i];
            j++;
        }
        i++;
    }

    return str_copy;
}

bool string_is_symmetric(const char *str) {
    size_t length = string_length(str);
    bool res = true;
    for(int i = 0, j = length - 1; i < j && res; i++, j--) {
        res = str[i] == str[j] && res;
    }
    return res;
}