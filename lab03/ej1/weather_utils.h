#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include "weather_table.h"

int min_abs(WeatherTable table);

void max_temp(WeatherTable table, int res[]);

void max_rainfall(WeatherTable table, int res[YEARS][MONTHS]);

#endif