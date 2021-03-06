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

void fillLine(int length, char c)
{
    for(int i = 0; i < length; i++)
        putchar(c);
    putchar('\n');
}

void printRectangle(int w, int h, char c)
{
    fillLine(w, c);
    for(int i = 0; i < w*(h-2); i++)
    {
        if(i % w == 0)
            putchar(c);
        else if(i % w == w-1)
            printf("%c\n",c);
        else
            putchar(' ');
    }
    fillLine(w, c);
}
