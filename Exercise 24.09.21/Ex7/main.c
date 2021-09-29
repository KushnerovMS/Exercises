//Kushnerov Michail B01 -107
#include <stdio.h>
#include <stdlib.h>

unsigned long long int nonacci(unsigned int n);

int main()
{
    unsigned int number = 0;

    scanf("%u", &number);

    unsigned long long int nan = nonacci(number);

    printf("nonacci number numbered %u is %llu\n", number, nan);
    return 0;
}

unsigned long long int nonacci(unsigned int n)
{
    unsigned long long int nonacci[] = {0, 0, 0, 0, 0, 0, 0, 1};
    int length = sizeof(nonacci)/sizeof(unsigned long long int);

    if(n <= length)
        return nonacci[n - 1];

    while(n -- > length)
    {
        unsigned long long int a = nonacci[0];

        for(int i = 0; i < length - 1; i++)
            nonacci[i] = nonacci[i + 1];

        nonacci[length - 1] = a;

        for(int i = 0; i < length - 1; i++)
            nonacci[length - 1] += nonacci[i];
    }

    return nonacci[length - 1];
}
