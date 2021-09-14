#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val = 0;
    scanf("%i",&val);

    int i = 1;
    while(i <= val)
        i *= 2;
    i /= 2;

    for(; i > 0; i /=2)
    {
        if(val / i != 0)
        {
            putchar('1');
            val -= i;
        }
        else
            putchar('0');
    }
    return 0;
}
