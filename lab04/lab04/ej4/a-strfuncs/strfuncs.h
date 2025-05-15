#ifndef  _STRFUNCS_H
#define  _STRFUNCS_H

#include <stdbool.h>

size_t string_length(const char *str);
/*
    calcula la longitud de la cadena apuntada por str
*/

char *string_filter(const char *str, char c);
/*
    devuelve una nueva cadena en memoria dinámica que
    se obtiene tomando los caracteres de str que son
    distintos del caracter c
*/
bool string_is_symmetric(const char *str);
/*
    indica si la cadena apuntada por str es simétrica
    en cuanto que el primer caracter concide con el
    último, el segundo con el penúltimo, etc
*/

#endif