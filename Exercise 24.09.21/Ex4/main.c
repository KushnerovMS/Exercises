//Kushnerov Mikhail B01 -107
#include <stdio.h>
#include <stdlib.h>

void binary(unsigned int n);

int main()
{
    unsigned int number = 0;
    scanf("%u", &number);
    binary(number);
    return 0;
}

void binary(unsigned int n)
{
    unsigned long int val = 0;

    for(unsigned long int i = 1; n > 0; i *= 10)
    {
        val += (n % 2)*i;
        n /= 2;
    }

    printf("%lu", val);
}
