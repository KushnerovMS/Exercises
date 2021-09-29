//Kushnerov MiKhail B01-107
#include <stdio.h>
#include <stdlib.h>

char get_a_letter();

int main()
{
    for(int i = 0; i <= 100; i++)
        putchar(get_a_letter());
    return 0;
}

char get_a_letter()
{
    char c = 0;
    while(!(((c = getchar()) >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
        ;
    return c;
}
