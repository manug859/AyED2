/* Ejercicio 4

Dado dos punteros p, q : pointer to int

a) escribí un algoritmo que intercambie los valores referidos sin modificar los valores de p y q.

proc pointer_value_swap (in p, q : pointer to int)
    var aux : int
    aux := *p
    *p := *q
    *q := *aux
end proc

proc pointer_swap (in p, q : pointer to int)
    var aux : pointer to int
    aux := p
    p := q
    q := aux
end proc



*/