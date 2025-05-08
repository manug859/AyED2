/*

Dar un algoritmo que obtenga la menor temperatura minima (TempMin) historica registrada en
la ciudad de Cordoba segun los datos del arreglo.

fun min_temp (in med:array [1986..2016, enero.. diciembre, 1..28, temp..prec] of nat, r : nat)
    var min_temp : nat

    min_temp := med[1986, enero, 1, temp]
    for i := 1986 to 2016 do
        for j := enero to diciembre do
            for k := 1 to 28 do
                if med[i, j, k, temp] < min_temp
                    min_temp := med[i, j, k, temp]
                fi
            od
        od
        r := min_temp
    od
end fun


Dar un algoritmo que devuelva un arreglo que registre para cada año entre 1980 y 2016 la mayor
temperatura maxima (TempMax) registrada durante ese año.

fun max_temp (in med:array[1986..2016, enero..diciembre, 1..28, temp..prec] of nat, r : nat)
    var year_max_temp : nat

    for i := 1986 to 2016 do
    year_max_temp := med[i, enero, 1, temp]
        for j := enero to diciembre do
            for k := 1 to 28 do
                if year_max_temp >= med[i, j, k, temp] 
                year_max_temp := med[i, j, k, temp]
                r := year_max_temp
                fi
            od
        od
    od
end fun


Dar un algoritmo que devuelva un arreglo que registre para cada año entre 1980 y 2016 el mes
de ese año en que se registró la mayor cantidad mensual de precipitaciones.

fun max_rainfall (in med:array[1986..2016, enero..diciembre, 1..28, temp..prec] of nat) ret a:array[1986..2016] of nat
    var max_rainfall : nat
    var month_max_rainfall : nat

    max_rainfall := med[1986, enero, 1, prec]

    for i := 1986 to 2016 do
    max_rainfall := 0
        for j := enero to diciembre do
        month_max_rainfall := 0
                for k := 1 to 28 
                do 
                    month_max_rainfall := month_max_rainfall + med[i, j, k, prec]
                od
            if month_max_rainfall > max_rainfall
                    max_rainfall := month_max_rainfall
                    r[i] := j
            fi
        od
    od
end fun




*/