//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void toMiddle(int * x1, int * x2, int midle);

int iabs (a);

int main()
{
    int x1 = 0, x2 = 0, midle = 0;
    scanf ("%d%d%d", &x1, &x2, &midle);
    toMiddle(&x1, &x2, midle);
    printf("%d %d\n", x1, x2);
    return 0;
}

void toMiddle(int * x1, int * x2, int midle)
{
    int len = iabs (*x1 - *x2);

    *x1 = midle - len / 2;
    *x2 = midle + (len + 1) / 2;
}

int iabs (a)
{
    return (a > 0)? a : -a;
}
