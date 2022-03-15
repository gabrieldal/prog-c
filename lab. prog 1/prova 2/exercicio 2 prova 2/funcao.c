#include <stdio.h>
#include <stdlib.h>

float calculo(float x, float z)
{
    float  y = 1;

    int i;

    for (i = 0; i < z; i++)
    {
        y = y * x;
    }

    return y;
}