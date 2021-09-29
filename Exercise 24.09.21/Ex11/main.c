//Kushnerov Mikhail B01-107
#include <stdio.h>
#include <stdlib.h>

unsigned long get_a_hexadecimal();

int main()
{
    printf("Enter hexadecimal number:");
    printf("Your number: %u", get_a_hexadecimal());
    return 0;
}

unsigned long get_a_hexadecimal()
{
    char c = 0;
    unsigned long val = 0;

    while (((c = getchar()) >= '0' && c <= '9') || (c >= 'A' && c <= 'F'))
    {
        val *= 16;
        if(c >= 'A' && c <= 'F')
            val += c - 'A' + 10;
        else
            val += c - '0';
    }

    return (c == '\n' || c == ' ')? val : 0;
}
