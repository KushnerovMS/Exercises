//Kushnerov Mikhail B01 -107
#include <stdio.h>
#include <math.h>

const float eps = 0.5;

int main ()
{
    float a = 0, b = 0;

    scanf ("%f %f", &a, &b);

    printf("%s\n", (fabs (a - b) <= eps)? "YES" : "NO");

    return 0;
}
