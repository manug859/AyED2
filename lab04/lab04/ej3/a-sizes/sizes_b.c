#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "data.h"

void
print_data(data_t d) {
    printf("NOMBRE: %s\n"
           "EDAD  : %d años\n"
           "ALTURA: %d cm\n\n",
           d.name, d.age, d.height);
}

int main(void) {

    data_t *p = NULL; // puntero a la estructura

    data_t messi = {"Leo Messi", 36, 169}; // inicializo la estructura
    
    p = malloc(sizeof(data_t));  // asigno memoria para la estructura
    
    strcpy(p->name, messi.name); // copio el nombre
    p->age = 36;                 // asigno la edad
    p->height = 169;             // asigno la altura


    

    printf("name-size  : %lu bytes\n"
           "age-size   : %lu bytes\n"
           "height-size: %lu bytes\n"
           "data_t-size: %lu bytes\n", 
           sizeof(p->name), 
           sizeof(p->age), 
           sizeof(p->height), 
           sizeof(data_t));

    printf("El índice de memoria de messi es indice:  %lu direccion: %p\n", (uintptr_t) &messi, (void *)&messi);
    printf("El índice de memoria de messi.name es indice: %lu direccion: %p\n", (uintptr_t) &messi.name, (void *)&messi.name);
    printf("El índice de memoria de messi.age es indice: %lu direccion: %p\n", (uintptr_t) &messi.age, (void *)&messi.age);
    printf("El índice de memoria de messi.height es indice: %lu direccion: %p\n", (uintptr_t) &messi.height, (void *)&messi.height);
    

    free(p);
    

    return EXIT_SUCCESS;
}
