#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "strfuncs.h"

size_t string_length(const char *str) {
    unsigned long length = 0;
    while(str[length] != NULL) {
        length++;
    }
    return length;
}

char *string_filter(const char *str, char c) {
    /*
        * recorrer el texto.
        * comparar el elemento actual con el char recibido.
        * si lo anterior ocurre, eliminar ese char.
    */
    unsigned int i = 0;
    while(str[i] != NULL) {
        
        if(str[i] == c) {
            
        }
        
        i++;
    }
}