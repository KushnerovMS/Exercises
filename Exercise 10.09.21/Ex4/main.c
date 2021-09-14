#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void getMaxValue(int * maxVal);

int main()
{
    int maxValue;
    maxValue = 0;

    getMaxValue(&maxValue);

    printf("%i",maxValue);

    return 0;
}

void getMaxValue(int * maxVal)
{
    int currentVal = 0;
    int n = 0;
    scanf("%i",&n);

    for(int i = 0; i < n && scanf("%i", &currentVal); i++)
        if(fabs(*maxVal) < fabs(currentVal))
            *maxVal = currentVal;

}
