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

void max_rainfall(WeatherTable table, int output[MONTHS])
{
    for (unsigned int year = 0; year < YEARS; year++)
    {
        unsigned int max_rainfall = 0;
        unsigned int max_month = 0;

        for (unsigned int month = january; month <= december; month++)
        {
            unsigned int monthly_rainfall = 0;

            for (unsigned int day = 0; day < DAYS; day++)
            {
                monthly_rainfall += table[year][month][day]._rainfall;
            }

            if (monthly_rainfall > max_rainfall)
            {
                max_rainfall = monthly_rainfall;
                max_month = month;
            }
        }

        output[year] = max_month;
    }

    for (int year = 0; year < YEARS; year++)
    {
        printf("Año %d --> Mes con más lluvia: %d\n", year + 1980, output[year]);
    }
}