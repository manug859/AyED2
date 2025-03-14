/*
$ gcc -Wall -Werror -Wextra -pedantic -std=c99 bounds.c -o bounds
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 4

struct bound_data {
    bool is_upperbound;
    bool is_lowerbound;
    bool exists;
    unsigned int where;
};

struct bound_data check_bound(int value, int arr[], unsigned int length) {
    struct bound_data res;
    res.exists = false;
    res.is_upperbound = false;
    res.is_lowerbound = false;
    res.where = 0;

    for(unsigned int i = 0; i < length; i++)
    {
        res.is_upperbound = res.is_upperbound || (value >= arr[i]);
        res.is_lowerbound = res.is_lowerbound || (value < arr[i]);
        res.exists = res.exists || (value == arr[i]);
        if (value == arr[i])
        {
            res.where = i;
        }
    }
    
    return res;
}

int main(void) {
    int a[ARRAY_SIZE];

    int value; 
    printf("Ingrese el valor a evaluar : ");
    scanf("%d", &value);

    for(int i = 0; i<ARRAY_SIZE; i++)
    {
        printf("Ingrese un valor para la posicion a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    struct bound_data result = check_bound(value, a, ARRAY_SIZE);

    printf("%d", result.is_upperbound); // Imprime 1
    printf("%d", result.is_lowerbound); // Imprime 0
    printf("%d", result.exists);        // Imprime 1
    printf("%u", result.where);         // Imprime 2

    return EXIT_SUCCESS;
}

