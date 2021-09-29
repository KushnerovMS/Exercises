//Kushnerov Mikhail B01 -107
#include <stdio.h>
#include <stdlib.h>

long long int factorial(unsigned int n);

int main()
{
    unsigned int input = 0;
    scanf("%u", &input);
    printf("%lli", factorial(input));
    return 0;
}

long long int factorial(unsigned int n)
{
    long long int output = 1;

    while(n > 0)
        output *= n--;

    return output;
}
