#ifndef _LIST_H
#define _LIST_H

#include <stdbool.h>

/* Garantiza el encapsulamiento */
typedef struct _node * list;

/* Elemento de lista */
typedef int list_elem;

/* Crea una lista vacía */
list empty(void);

/* Agrega el elemento e al comienzo de la lista */
list addl (list l, list_elem e);

/* Libera memoria en caso que sea necesario */
void destroy(list l);

// -- OPERACIONES -- 

/* Devuelve True si l es vacía */
bool is_empty(list l);

/* Devuelve el primer elemento de la lista l */
/* PRE: not is_empty(l) */
list_elem head(list l);

/* Elimina el primer elemento de la lista l */
/* PRE: not is_empty(l) */
list tail(list l);

/* agrega el elemento e al final de la lista l */
list addr(list l, list_elem e);

/* Devuelve la cantidad de elementos de la lista l */
unsigned int length(list l);

/* Agrega al final de l todos los elementos de l0 en el mismo orden */
list concat(list l, list l0);

/* Devuelve el n-ésimo elemento de la lista l */
/* PRE: length(l) > n */
list_elem index(list l, int n);

/* Deja en l sólo los primeros n elementos, eliminando el resto */
list take(list l, int n);

/* Elimina los primeros n elementos de l */
list drop(list l, int n);

/* Copia todos los elementos de l1 en la nueva lista l2 */
list copy_list(list l);

#endif 