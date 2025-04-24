#include <stdio.h>
#include <stdlib.h>

#include "weather_table.h"

int min_abs(WeatherTable table)
{
    int res = table[0][0][0]._min_temp;

    for (int years = 0; years < YEARS; years++)
    {
        for (int months = january; months <= december; months++)
        {
            for (int days = 0; days < DAYS; days++)
            {
                if (table[years][months][days]._min_temp < res)
                {
                    res = table[years][months][days]._min_temp;
                }
            }
        }
    }
    printf("min temp = %d\n", res);
    return res;
}

void max_temp(WeatherTable table, int output[YEARS])
{

    for (unsigned int year = 0; year < YEARS; year++)
    {
        int max_temp_aux = table[year][0][0]._max_temp;
        for (unsigned int month = january; month <= december; month++)
        {
            for (unsigned int day = 0; day < DAYS; day++)
            {
                if (max_temp_aux < table[year][month][day]._max_temp)
                {
                    max_temp_aux = table[year][month][day]._max_temp;
                }
            }
        }
        output[year] = max_temp_aux;
    }
    for (int i = 0; i < YEARS; i++)
    {
        printf("año = %d, max_temp = %d\n", i + 1980, output[i]);
    }
}

void max_rainfall(WeatherTable table, int res[YEARS][MONTHS])
{

    for (unsigned int year = 0; year < YEARS; year++)
    {
        for (unsigned int month = january; month <= december; month++)
        {
            unsigned int max_rainfall_monthly = table[year][month][0]._rainfall;
            for (unsigned int day = 0; day < DAYS; day++)
            {
                if (max_rainfall_monthly < table[year][month][day]._rainfall)
                {
                    max_rainfall_monthly = month;
                }
            }
            res[year][month] = max_rainfall_monthly;
        }
    }

    for (int years = 0; years < YEARS; years++)
    {
        for (int months = january; months <= december; months++)
        {
            printf("año[%d] --> mes[%d] --> precipitacion = %d\n", years + 1980, months + 1, res[years][months]);
        }
    }
}