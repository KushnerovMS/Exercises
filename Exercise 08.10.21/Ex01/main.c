//Kushnerov Mikhail B01 -107
#include <stdio.h>
#include <stdlib.h>

int max (int a, int b);

int main()
{
    int a, b;
    a = b = 0;
    scanf ("%d %d", &a, &b);
    printf("Max: %d\n", max (a, b));
    return 0;
}

int max (int a, int b)
{
    return (a > b)? a : b;
}
