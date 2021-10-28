//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

void mirror (int* x, int* y);

int main()
{
    int x = 0, y = 0;
    scanf ("%d%d", &x, &y);
    mirror (&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}

void mirror (int* x, int* y)
{
    *x *= -1;
}
