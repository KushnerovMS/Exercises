//Kushnerov Mikhail B01 -107
#include <stdio.h>
#include <stdlib.h>

unsigned int positive (int x);

int main()
{
    int x = 0;
    printf ("x = ");
    scanf ("%d", &x);
    printf("|x| = %d\n", positive (x));
    return 0;
}

unsigned int positive (int x)
{
    return (x >= 0)? x : -x;
}
