#include <stdio.h>
#include <stdlib.h>

void printRectangle(int, int, char);

int main()
{
    int width, height;
    width = height = 0;

    scanf("%i %i",&height,&width);

    printRectangle(width, height, '+');
    return 0;
}

void printRectangle(int w, int h, char c)
{
    for(int i = 1; i <= w*h; i++)
    {
        putchar(c);
        if(i % w == 0)
            putchar('\n');
    }
}
