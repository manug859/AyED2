#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include "weather_table.h"

int min_abs(WeatherTable table);
/*
    dada una tabla se debe devolver el mínimo valor de la temperatura de toda la tabla.
*/

void max_temp(WeatherTable table, int output[YEARS]);
/*
    Dada una tabla se debe devolver el máximo valor de la temperatura de cada año.
    Se debe guardar el resultado en un array de tamaño YEARS.
*/

void max_rainfall(WeatherTable table, int output[MONTHS]);
/*
    Dada una tabla se debe devolver el máximo valor de la lluvia de cada mes.
    Se debe guardar el resultado en un array de tamaño MONTHS.
*/

#endif