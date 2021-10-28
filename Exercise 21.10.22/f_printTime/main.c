//Kushnerov Mikhail B01-107

#include <stdio.h>
#include <stdlib.h>

void printLocalTime(int hMos, int h, int hplane);

const int DAY = 5;

int main()
{
    int hMos = 0, h = 0, hplane = 0;
    scanf ("%d %d %d", &hMos, &h, &hplane);
    printLocalTime(hMos, h, hplane);
    return 0;
}

void printLocalTime(int hMos, int h, int hplane)
{
    int t = hMos - h + hplane;
    printf ("%d %d", t % 24, DAY + t / 24);
}
