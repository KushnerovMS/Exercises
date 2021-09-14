#include <stdio.h>
#include <stdlib.h>

void printTriangle(int ,char);

int main()
{
    int width = 0;

    scanf("%i",&width);

    printTriangle(width, '+');
    return 0;
}

void fillLine(int length, char c)
{
    for(int i = 0; i < length; i++)
        putchar(c);
    putchar('\n');
}

void printTriangle(int width, char c)
{
    for(int i = 1; i <= width; i++)
        fillLine(i, c);
}
