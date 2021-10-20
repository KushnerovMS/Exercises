//Kushnerov Mikhail B01 -107

#include <stdio.h>
#include <stdlib.h>

unsigned int fib(unsigned int n);

int main()
{
    printf("%d\n", fib (40));
    return 0;
}

unsigned int fib(unsigned int n)
{
    return (n <= 1)? 1 : fib (n - 1) + fib (n - 2);
}
