//Kushnerov Mikhail B01 -107

#include <stdio.h>
#include <stdlib.h>

void simpleFactors (long long a, int last, int deg);

int main()
{
    simpleFactors (666, 2, 0);
    return 0;
}

void simpleFactors (long long a, int last, int deg)
{
    if (a % last == 0)
    {
        simpleFactors (a / last, last, deg + 1);
    }
    else
    {
        if (a > 1)
            simpleFactors (a, last + 1, 0);
        if (deg > 0)
        {
            if (deg == 1)
                printf ("%d ", last);
            else
                printf ("%d^%d ", last, deg);
        }
    }
}
