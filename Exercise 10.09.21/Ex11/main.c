#include <stdio.h>
#include <stdlib.h>

void printRhombus(int, char);

int main()
{
    int width = 0;

    scanf("%i",&width);

    printRhombus(width, '+');
    return 0;
}

void printCenterLine(int strLength, int length, char c)
{
    for(int i = 1; i <= (strLength-length)/2; i++)
        putchar(' ');
    for(int i = 1; i <= length; i++)
        putchar(c);
    putchar('\n');
}

void printRhombus(int width,char c)
{
    for(int i = 1; i <= width; i += 2)
        printCenterLine(width, i, c);
    for(int i = width - 2; i >= 1; i -= 2)
        printCenterLine(width, i, c);
}
