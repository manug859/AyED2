/*
    proc min_row (in a:array [1..n, 1..m] of int, out r : int)
    var min : int

    for i := 1 to n do
    min := a[i,1]
        for j := 1 to m do
            if a[i, j] < min
                min := a[i, j]
            fi
        od
        r := min
    od
    end proc

    proc min_array (in a:array [1..n, 1..m] of int, out r : array [1..n] of int)
    var min : int
    for i := 1 to n do
        min := a[i,1]
        for j := 1 to m do
            if a[i, j] < min
                min := a[i, j]
            fi
        od
        r[i] := min
    od
    end proc
*/

