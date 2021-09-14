#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n = 0;
    char c = 0;

    while((c = getchar()) != '@')
        if(isdigit(c))
            n++;

    printf("%i", n);

    return 0;
}
