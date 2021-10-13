//Kushnerov Mikhail B01 -107
#include <stdio.h>
#include <math.h>

const float eps = 0.1;

int main ()
{
    float a = 0, b = 0, v = 0, t = 0;

    scanf ("%f %f %f %f", &a, &b, &v, &t);

    float l = a * t;
    printf("%s\n", (a - eps <= l && l <= b + eps)? "YES" : "NO");

    return 0;
}
