/* Ejercicio 3

    Dado el tipo:

    type person = tuple
        name : string
        age : nat
        weight : nat
    end tuple

    a) escribi un algoritmo que calcule la edad y peso promedio de un arreglo a : array[1..n] of person.

fun avg_age_weight (in a:array[1..n] of person) ret avg_age, avg_weight : nat 
    var avg_age : nat
    var avg_weight : nat

    var avg_age := 0
    var avg_weight := 0

    for i := 1 to n do
    avg_age := avg_age + a[i].age
    avg_age := avg_age + a[i].weight
    od

    avg_age := avg_age / n
    avg_weight := avg_weight / n

end fun

b) escribí un algoritmo que ordene alfabéticamente dicho arreglo

proc sort_by_name (in/out a:array [1..n] of person, in lft, rgt: nat)

    var pivot : nat
    if rgt > lft --> partition(a, lft, rgt, pivot)
                     sort_by_name(a, lft, pivot-1)
                     sort_by_name(a, pivot+1, rgt)
    fi
end proc
*/