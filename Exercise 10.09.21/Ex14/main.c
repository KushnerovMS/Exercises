#include <stdio.h>
#include <stdlib.h>

void get10Count(int, int*, int*);
void printn(char, int);

int main()
{
    int val = 0;
    int countOf1, countOf0;
    countOf1 = countOf0 = 0;

    scanf("%i",&val);

    get10Count(val, &countOf1, &countOf0);

    printn('1', countOf1);
    printn('0', countOf0);

    return 0;
}

void get10Count(int val, int* countOf1, int* countOf0)
{
    int i = 1;
    while(i <= val)
        i *= 2;
    i /= 2;

    for(; i > 0; i /=2)
    {
        if(val / i != 0)
        {
            *countOf1 += 1;
            val -= i;
        }
        else
            *countOf0 += 1;
    }
}

void printn(char c, int n)
{
    for(int i = 0; i < n; i++)
        putchar(c);
}
