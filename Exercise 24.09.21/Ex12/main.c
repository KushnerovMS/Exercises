//Kushnerov Mikhail B01-107
#include <stdio.h>
#include <stdlib.h>

unsigned long get_really_any_hexadecimal();

int main()
{
    printf("Enter hexadecimal number:");
    printf("Your number: %u", get_really_any_hexadecimal());
    return 0;
}

unsigned long get_really_any_hexadecimal()
{
    char c = 0;
    unsigned long val = 0;

    while ((c = getchar()) != '\n' && c != ' ')
    {
        val *= 16;
        if(c >= 'A' && c <= 'F')
            val += c - 'A' + 10;
        else if(c >= 'a' && c <= 'f')
            val += c - 'a' + 10;
        else if (c >= '0' && c <= '9')
            val += c - '0';
        else
            val /= 16;
    }

    return val;
}
