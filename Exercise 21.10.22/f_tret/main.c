//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

void oneTr (float* x1, float* x2);

int main()
{
    float x1 = 0, x2 = 0;
    scanf ("%f%f", &x1, &x2);
    oneTr (&x1, &x2);
    printf("%f %f\n", x1, x2);
    return 0;
}

void oneTr (float* x1, float* x2)
{
    float x = *x1;
    *x1 = (*x1 < *x2)?  (2 * *x1 + *x2) / 3 : (*x1 + 2 * *x2) / 3;
    *x2 = (x > *x2)?    (2 * x + *x2) / 3   : (x + 2 * *x2) / 3;
}
