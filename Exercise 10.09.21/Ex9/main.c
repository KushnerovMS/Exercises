#include <stdio.h>
#include <stdlib.h>

int get1Count();

int main()
{
    printf("%i",get1Count());
    return 0;
}

int get1Count()
{
    int n = 0;
    char c = 0;
    while((c = getchar()) == '1' || c == '0')
        if(c == '1')
            n ++;

    return n;
}
