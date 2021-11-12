#include <stdio.h>
#include <stdlib.h>

size_t my_strlen(const char *s);

int main()
{
    printf("%u", my_strlen("Hello world!\n"));
    return 0;
}

size_t my_strlen(const char *s)
{
    size_t n = 0;
    while (s[n] != '\0')
        n ++;
    return n;
}
