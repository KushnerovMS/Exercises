//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

void rotateC(int* x1, int* y1, int* x2, int* y2);

int main()
{
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    scanf ("%d%d%d%d", &x1, &y1, &x2, &y2);
    rotateC(&x1, &y1, &x2, &y2);
    printf ("%d %d %d %d", x1, y1, x2, y2);
    return 0;
}

void rotateC(int* x1, int* y1, int* x2, int* y2)
{
    float cx = (*x1 + *x2) / 2.0;
    float cy = (*y1 + *y2) / 2.0;

    int y = *y1;

    *y1 = *y2;
    *y2 = y;


    y = *y1;

    *y1 = -*x1 + cx + cy;
    *x1 = y + cx - cy;

    y = *y2;

    *y2 = -*x2 + cx + cy;
    *x2 = y + cx - cy;
}
