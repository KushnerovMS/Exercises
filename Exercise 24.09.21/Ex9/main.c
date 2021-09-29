//Kushnerov MiKhail B01-107
#include <stdio.h>
#include <stdlib.h>

char leveling(char c);

int main()
{
    char c= 0;
    while((c = getchar()) != '\n')
        putchar(leveling(c));

    return 0;
}

char leveling(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    else
        return c;
}
