//Kushnerov Mikhail B01 -107
#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int n);

int main()
{
    unsigned int number = 0;

    scanf("%u", &number);

    printf("fibonacci number numbered %u is %llu\n", number, fibonacci(number));
    return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
    unsigned long long int n1 = 0;
    unsigned long long int n2 = 1;

    if(n == 1)
        return n1;
    if(n == 2)
        return n2;

    for(int i = 3; i <= n; i++)
    {
        unsigned long long int a = n2;
        n2 += n1;
        n1 = a;
    }
    return n2;
}
