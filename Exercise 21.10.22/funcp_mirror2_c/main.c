//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

void mirror(int* x1, int* y1, int* x2, int* y2);

int main()
{
    int x1, y1, x2, y2;
    x1 = y1 = x2 = y2 = 0;
    scanf ("%d%d%d%d", &x1, &y1, &x2, &y2);
    mirror (&x1, &y1, &x2, &y2);
    printf("%d %d %d %d\n", x1, y1, x2, y2);
    return 0;
}

void mirror(int* x1, int* y1, int* x2, int* y2)
{
    *y1 *= -1;
    *y2 *= -1;
}
