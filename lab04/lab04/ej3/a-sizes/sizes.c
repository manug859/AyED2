#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "data.h"

void print_data(data_t d) {
    printf("NOMBRE: %s\n"
           "EDAD  : %d años\n"
           "ALTURA: %d cm\n\n",
           d.name, d.age, d.height);
}

int main(void) {

    data_t messi = {"Leo Messi", 36, 169};
    print_data(messi);

    printf("name-size  : %lu bytes\n"
           "age-size   : %lu bytes\n"
           "height-size: %lu bytes\n"
           "data_t-size: %lu bytes\n", 
           sizeof(messi.name), 
           sizeof(messi.age), 
           sizeof(messi.height), 
           sizeof(data_t));

    printf("El índice de memoria de messi es indice:  %lu direccion: %p\n", (uintptr_t) &messi, (void *)&messi);
    printf("El índice de memoria de messi.name es indice: %lu direccion: %p\n", (uintptr_t) &messi.name, (void *)&messi.name);
    printf("El índice de memoria de messi.age es indice: %lu direccion: %p\n", (uintptr_t) &messi.age, (void *)&messi.age);
    printf("El índice de memoria de messi.height es indice: %lu direccion: %p\n", (uintptr_t) &messi.height, (void *)&messi.height);
    
    return EXIT_SUCCESS;
}
